#include<iostream>
using namespace std;

class  NODE {

    public:
    int data;
    NODE * prev;
    NODE * next;

    NODE(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL; 
    }
};


NODE *CreateDLL(int arr[], int index,int size, NODE *back)
{
    if(index==size)
    return NULL;

    NODE *temp = new NODE(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr,index+1,size,temp);
    return temp;
}

int main() {

    int arr[] = {1,2,3,4};
    
    NODE * Head = NULL;

    Head = CreateDLL(arr,0,4,NULL);


    int pos = 2;
    pos--;

    if(pos==0)
    {
        if(Head == NULL)
        {
            Head = new NODE(5);
        }
        else
        {
            NODE * temp = new NODE(5);
             temp-> next = Head;
             Head-> prev = temp;
             Head = temp;
        }
    }
    else
    {
        NODE * curr;
        curr = Head;
        while (pos--)
        {
          curr = curr->next;
        }
        NODE *temp;
        temp = new NODE(5);
        temp->next = curr->next;
        temp->prev = curr;
        curr->next = temp;
        temp->next->prev = temp;
        
    }



    // for (int i = 0; i < 4; i++)
    // {
    //     if (Head == NULL)
    //     {
    //         Head = new NODE(arr[i]);
    //     }
    //     else{
    //         NODE * curr;
    //         curr = Head;
    //         while (curr->next != NULL)
    //         {
    //             curr=curr->next;
    //         }
    //         NODE* temp = new NODE(arr[i]);
    //         curr->next = temp;
    //         temp->prev = curr;

    //     }
        
    // }

    NODE *temp;
    temp = Head;
    while (temp != NULL)
    {
        cout << temp -> data<< " ";
        temp = temp->next;
    }
    
    

}