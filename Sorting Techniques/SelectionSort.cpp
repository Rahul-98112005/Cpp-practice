#include<iostream>
using namespace std;
int main() {

    int arr[] = {10, 4, 3, 2, 8};
    
    int index ;
    for (int i = 4; i >= 1; i--)
    {   
        index = i;            
        for (int j = i-1  ; j >=0; j--)       
        {
            if(arr[j] > arr[index] )   // 2 > 8 // 3 > 8  // 4 > 8 // 10 > 8
             {
                index = j;       //  0             
             }
              
        }

        swap(arr[index], arr[i]);   //  10,8
    
        
    }


    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return  0;
}