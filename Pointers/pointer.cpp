#include<iostream>
using namespace std;
int main() {
    // int a  = 110;
    // int *ptr = &a;

    // cout << &a << endl;
    // cout << ptr;

    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = a+4;
    // cout << *ptr;

    for (int i = 0; i < 5; i++)
    {
        // cout << ptr[i] << " ";
        // cout << *(a + i);
        // cout << *(ptr + i);
        // cout << *ptr;
        // ptr++;
        cout << *ptr;
        ptr--;
    }
    

}