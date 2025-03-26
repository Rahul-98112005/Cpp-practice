#include<iostream>
using namespace std;

// class Stack {

//     int top;
//     int size;
//     int flag;
//     int * arr;

//     public:

//     Stack(int s)
//     {
//         top = -1;
//         size = s;
//         flag = 1;
//         arr = new int[s];
//     }

//     void push(int value)
//     {
//         if(top == size-1)
//         {
//             cout << "Stack Overflow";
//             return;
//         }
//         else{
//             top++;
//             arr[top] = value;
//             flag = 0;
//         }
//     }

//     void pop() {
//         if(top == -1)
//         {
//             cout << "Stack underflow";
//             return;
//         }
//         else{
//             cout << arr[top] << "is poped from stack ";
//             top--;
//             if(top==-1)
//             flag = 1;
//         }
//     }

//     int peek() {

//         if(top == -1)
//         {
//             return -1;
//         }
//         else {
//             return arr[top];
//         }

//     }

//     int Isempty()
//     {
//         if(top == -1)
//         {
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }

// };

class NODE {

    public:
    int data;
    NODE *next;


     NODE(int value)
     {
        data = value;
        next = NULL;
     }
};

class Stack {
    NODE *top;
    int size;
    
    public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int value)
    {
        NODE *temp = new NODE(value);
        temp->next = top;
        top = temp;
    }

    void pop() {

        if(top == NULL)
        {
            cout << "Stack underflow";

        }
        else
        {
            NODE * temp = top;
            top = top->next;
            delete top;
        }
    }

    void peek() {
        if(top == NULL)
        {
            cout << "Stack is empty";
        }
        else
        {
            cout << top->data;
        }
    }

    void Isempty() {
        if(top == NULL)
        cout << "true";
        else
        cout << "false";
    }


};

int main()
{

    Stack S1;
    S1.push(3);
    S1.push(4);
    S1.push(5);
    S1.peek();
    cout << endl;
    S1.Isempty();


}