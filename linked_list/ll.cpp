#include<iostream>
using namespace  std;

class NODE{
    public:
    int data;
    NODE *next;

    
    NODE(int value)
    {
         data = value;
        next = NULL;
    }
};

// NODE * CreateLinkedList(int arr[], int index, int size)
// {
//     if(index == size)
//     {
//         return NULL;
//     }
//     NODE *temp;
//     temp = new NODE(arr[index]);
//     temp->next = CreateLinkedList(arr,index+1,size);
//     return temp;
// }

NODE * CreateLinkedList(int arr[], int index, int size, NODE*prev)
{
    if(index == size)
    {
        return prev;
    }
    NODE *temp;
    temp = new NODE(arr[index]);
    temp->next =prev;
   return CreateLinkedList(arr,index+1,size,temp);
}
int main() {

    // NODE *Head = new NODE(5);
    // int arr[] = {1,2,3,4};

    // for (int i = 0; i < 4; i++)
    // {
    //     if(Head == NULL)
    //     {
    //         Head = new NODE(arr[i]);
    //     }
    //     else
    //     {
    //         NODE *temp = NULL;
    //         temp = Head;
            
    //         while (temp->next != NULL)
    //         {
    //           temp = temp->next;
    //         }

    //         NODE *temp2;
    //         temp2 = new NODE(arr[i]);
    //         temp->next = temp2;
    //         temp2->next = NULL;          

    //     }
    // }
    // NODE *temp;
    // temp = Head;

    // while(temp)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

    // INsertion from starting

    // NODE *Head = new NODE(5);

    // for (int i = 0; i < 4; i++)
    // {
    //     if(Head == NULL)
    //     {
    //         Head = new NODE(arr[i]);
    //     }
    //     else
    //     {
    //         NODE *temp = new NODE(arr[i]);
    //         temp->next = Head;
    //         Head = temp;
    //     }
    // }

    //  NODE *temp;
    // temp = Head;

    // while(temp)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

    int arr[] = {1,2,3,4};
    // NODE* Head = CreateLinkedList(arr,0,4);

    // NODE*temp = Head;
    //   while(temp)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

    NODE*Head = CreateLinkedList(arr,0,4,NULL);
    NODE*temp = Head;
      while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
int pos;
cin >> pos;
pos--;

NODE* temp1 = Head;

    while (pos--)
    {
        temp = temp->next;
    }

    

    

}