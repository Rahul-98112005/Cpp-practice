#include <iostream>
using namespace std;
int main()
{

    // appproach 1

    //     Before the loop starts: {3, 1, 2, 4, 5}
    // After i=1 (1st element sorted): {1, 3, 2, 4, 5} (1 swapped with 3)
    // After i=2 (2nd element sorted): {1, 2, 3, 4, 5} (2 swapped with 3)
    // After i=3 (3rd element sorted): {1, 2, 3, 4, 5} (no change, already sorted)
    // After i=4 (4th element sorted): {1, 2, 3, 4, 5} (no change, already sorted)

    // int arr[] = {3, 1, 2, 4, 5};

    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         if (arr[j] < arr[j - 1])
    //         {
    //             swap(arr[j], arr[j - 1]);
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i];
    // }


    // approach 2 // decrasing order

    // Array changes step-by-step:
    // Iteration i=1, j=1: arr = {3, 1, 2, 4, 5} (no change, 3 > 1)
    // Iteration i=2, j=2: arr = {3, 2, 1, 4, 5} (swap 2 and 1)
    // Iteration i=2, j=1: arr = {3, 2, 1, 4, 5} (no change, 3 > 2)
    // Iteration i=3, j=3: arr = {3, 2, 4, 1, 5} (swap 4 and 1)
    // Iteration i=3, j=2: arr = {3, 4, 2, 1, 5} (swap 4 and 2)
    // Iteration i=3, j=1: arr = {4, 3, 2, 1, 5} (swap 4 and 3)
    // Iteration i=4, j=4: arr = {4, 3, 2, 5, 1} (swap 5 and 1)
    // Iteration i=4, j=3: arr = {4, 3, 5, 2, 1} (swap 5 and 2)
    // Iteration i=4, j=2: arr = {4, 5, 3, 2, 1} (swap 5 and 3)
    // Iteration i=4, j=1: arr = {5, 4, 3, 2, 1} (swap 5 and 4)

    // int arr[] = {3, 1, 2, 4, 5};

    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         if (arr[j] > arr[j - 1])
    //         {
    //             swap(arr[j], arr[j - 1]);
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i];
    // }






    // approach-3 // sorting from last
//     Initial: `{1, 2, 4, 5, 3}`  
// After `i = 4`: `{1, 2, 3, 4, 5}`  
// After `i = 3`: `{1, 2, 3, 4, 5}`  
// After `i = 2` and `i = 1`: `{1, 2, 3, 4, 5}`


   
    int arr[] = { 1, 2, 4, 5, 3};
    

    for (int i = 4 ; i > 0; i--)            
    {
       
        for (int j = i; j > 0; j--)             //  1
        {
            if (arr[j] < arr[j - 1])        // 
            {
                swap(arr[j], arr[j - 1]);
                
            }
            else{
                break;
            }
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }


     return 0;
}