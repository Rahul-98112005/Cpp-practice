#include<iostream>
using namespace std;

class Maxheap {
    public:
    int * arr;
    int size;
    int total_size;

    Maxheap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value) {

        if(size == total_size)
        {
            cout << "Heap Overflow";
            return;
        }
        arr[size] = value;
        int index = size;
        size++;

        // Compare with its parent
        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[(index-1)/2],arr[index]);
        }
    }
    void print() {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
            cout<< endl;
        }
        
    }
     
    void Heapify(int index) {

        int largest = index;
        int left = 2*index + 1;
        int right = 2*index + 2;

        if(left<size && arr[left]>arr[largest])
        largest = left;

        if(right<size && arr[right]>arr[largest])
        largest = right;

        if(largest!=index)
        {
          swap(arr[largest],arr[index]);
          Heapify(largest);
        }

    }

    void delete()
    {
        if(size==0)
        {
            cout << "Heap Underflow";
            return;
        }
        arr[0] = arr[size-1];
        size--;
        Heapify(0);
    }
};

int main() {
    Maxheap h1(5);
    h1.insert(3);
    h1.insert(2);
    h1.insert(9);
    h1.insert(1);
    h1.insert(7);
    h1.insert(5);
    h1.print();
    

}
