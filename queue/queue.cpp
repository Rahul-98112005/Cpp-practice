#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
    public:
    Node *front;
    Node *rear;
    Queue() {
        front = rear = NULL;
    }

    bool isEmpty() {
      return front == NULL;
    }

    void push (int x) {
        if(isEmpty())
        {
            cout << x << "is Pushed in queue"<<endl;
            front  = new Node(x);
            rear = front;
            return;
        }
        else
        {
            cout << x << "is Pushed in queue"<<endl;
            rear->next = new Node(x);
            rear = rear->next;
        }
    }
    void pop () {
        if(isEmpty())
        {
            cout << "queue is underflow";
             return ;
        }
        else
        {

            Node *temp;
            temp = front;
            front = front->next;
            cout << temp->data << "is popped from queue";
            delete temp;
         }
   
}

    int start() {
        if(isEmpty())
        {
            cout << "queue is empty";
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main() {

        Queue q;

    q.push(5);
    q.push(15);
    q.push(20);
    q.push(15);
    q.push(20);
    cout<< q.isEmpty();

}

// class Queue {
//     public:
//     int *arr;
//     int front,rear;
//     int size;

//     Queue(int n) {
//         arr = new int[n];
//         front = -1;
//         rear = -1;
//         size = n;
        
//     }

//     bool isFull() {
//         return rear==size-1;
//     }
//     bool isEmpty() {
//         return front==-1;
//     }

//     void push(int x) {

//         if(isFull())
//         {
//             cout<<"Queue Overflow";
//             return;
//         }
//         else if(isEmpty())
//         {
//             front = rear = 0;
//             cout<<x<<"is pushed in queue"<<endl;
//             arr[0] = x;
//         }
//         else
//         {
//             rear = (rear+1)%size;
//             cout<<x<<"is pushed in queue"<<endl;
//             arr[rear] = x;
//         }
//     }

//     void pop() {

//         if(isEmpty())
//         {
//             cout<<"Queue is empty";
//             return;
//         }
//         else
//         {

//             if(front == rear)
//             front = rear = -1;
//             else
//             {
//             cout<<arr[front]<<"is popped from queue";
//             front = (front+1)%size;
//         }

//         }
//     }
// };

// int main() {

//     Queue q(5);

//     q.push(5);
//     q.push(15);
//     q.push(20);
//     q.push(15);
//     q.push(20);
//     cout<< q.isEmpty();
//     cout<< q.isFull();


// }