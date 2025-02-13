
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class Value>
struct Array
{
	int  n, sz;
	Value* arr;

	void Initialize() {
        n = 0;
        sz = 1;
        arr = new Value[sz];
    }
	void Destroy() {
        delete[] arr;
    }
	void AddLast(Value v) {
        if(n == sz) {
            sz*=2;
            Value *temp = new Value[sz];
            for(int i = 0; i < n; i++) { // n is equal to old sz
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[n++] = v;
    }
	void RemoveLast() {
        if(n > 0) n--;
    }
	Value& operator[](int i) {
        return arr[i];
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class Elem>
struct Heap
{
	Array<Elem> a;
	bool (*IsBefore)(Elem&, Elem&);

	void Initialize(bool (*_IsBefore)(Elem&, Elem&)) {
        a.Initialize();
        IsBefore = _IsBefore;
    }
	void Destroy() {
        a.Destroy();
    }
	int Child(int i) {
        return 2*i + 1;
    }
	int Parent(int i) {
        return (i-1) / 2;
    }
    // start with max heap
    void MoveUp(int ind) {
        Elem temp = a[ind];
        while (ind > 0 && IsBefore(temp, a[Parent(ind)])) {
            a[ind] = a[Parent(ind)];
            ind = Parent(ind);
        }
        a[ind] = temp;
    }
    void MoveDown(int ind) {
        // after deleting the top element
        int i = 0;
        int j = Child(i); // left child
        while(j < ind) {
            if(IsBefore(a[j+1], a[j])) {
                j = j+1;
            }

            if(IsBefore(a[j], a[i])) {
                Elem temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                i = j;
                j = 2*i+1;
            } else {
                break;
            }
        }
    }
	void Add(Elem e) {
        a.AddLast(e);
        int insertedAtIndex = a.n - 1;
        this->MoveUp(insertedAtIndex);
    }
	Elem GetFirst() {
        if(a.n ==0) throw "Heap is Empty";
        return a[0];
    }
    Elem RetrieveFirst() {
        if(a.n ==0) throw "Heap is Empty";

        Elem root = a[0];
        int lastIndex = a.n - 1;
        a[0] = a[lastIndex];
        this->MoveDown(lastIndex);
        a.RemoveLast();
        return root;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool IsBeforeInt(int& a, int& b)
{
	return a<b;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    int n;
    while(cin >> n && n != 0) {
        long long total  = 0;
        Heap<int> heap;
        heap.Initialize(IsBeforeInt);

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            heap.Add(x);
        }

        while(heap.a.n > 1) {
            int cost = heap.RetrieveFirst() + heap.RetrieveFirst();
            heap.Add(cost);
            total += cost;
        }
        cout << total << endl;
        heap.Destroy();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
3
6 5 4
10
9 5 48 2 4 5 6 3 5 4
10
3 4 5 4 7 2 3 8 4 5
0 * */