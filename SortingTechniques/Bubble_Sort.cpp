#include <iostream>
using namespace std;
int main() {
   // [5, 2, 9, 1, 7] n = 5
  //approch 1
  // i = 3 [1, 5, 2, 9, 7]
  // i = 2 [1, 2, 5, 7, 9]
  // i = 1 [1, 2 , 5, 7, 9]
   
  // int arr[] = {5, 2, 9, 1, 7}; //  
  //  bool swapped;

  // for (int i = 3; i >= 0; i--)           
  // {
  //   swapped = 0;
  //   for (int j = 3; j >= 0; j--)      
  //   {
        

  //       if( arr[j] > arr[ j + 1]  )  
  //       {
  //           swap(arr[j], arr[j+1]);                            
  //           swapped = 1;              
  //       }
  //   }
  //   if ( swapped == 0)
  //   {
  //       break;
  //   }
    
  // }


  // approch 2

   // i = 3 [2, 5, 1, 7,9]
  // i = 2 [2, 1, 5, 7, 9]
  // i = 1 [1, 2, 5, 7, 9]
   
  // int arr[] = {5, 2, 9, 1, 7}; //  
  //  bool swapped;

  // for (int i = 3; i >= 0; i--)           
  // {
  //   swapped = 0;
  //   for (int j = 0; j <= i; j++)      
  //   {
        

  //       if( arr[j] > arr[ j + 1]  )  
  //       {
  //           swap(arr[j], arr[j+1]);                            
  //           swapped = 1;              
  //       }
  //   }
  //   if ( swapped == 0)
  //   {
  //       break;
  //   }
    
  // }



  // approch 3 decreasing order

   // i = 3 [9, 5, 2, 7, 1]
  // i = 2 [9, 7, 5, 2, 1]
  // i = 1 [9, 7, 5, 2 ,1]
   
  int arr[] = {5, 2, 9, 1, 7}; //  
   bool swapped;

  for (int i = 3; i >= 0; i--)           
  {
    swapped = 0;
    for (int j = i; j >= 0; j--)      
    {
        

        if( arr[j] < arr[ j + 1]  )  
        {
            swap(arr[j], arr[j+1]);                            
            swapped = 1;              
        }
    }
    if ( swapped == 0)
    {
        break;
    }
    
  }


  for (int i = 0; i < 5; i++)
  {
    cout << arr[i];
  }
  
  
return 0;

}