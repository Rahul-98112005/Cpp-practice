#include<iostream>
using namespace std;
int main() {

    // int arr[3][4] = {2,3,4,5,1,2,6,8,4,3,3,2};

    // int ans = 0;
    // int i , j;
    // for (int i = 0; i < 5; i++)
    // {
    //     int total = 0;
    // for (int j = 0; j < 4; j++)
    // { 
    //     total += arr[i][j];
    //     if (sum < total)
    //     {
    //         sum = total;
    //         index = i;
    //     }
        

    // }
    
    // }
    // cout << index;
    // for ( i = 0; i < 3; i++)
    // {
    //   int start = 0, end = 3;
    //    while (start <= end)
    //    {
    //     swap(arr[i][start], arr[i][end]);
    //     start++;
    //     end--;
    //    }
       
        
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }
    
    // return 0;

    // int arr[4][4] ={3, 6, 4, 2, 7 , 8, 11, 5 , 9, 3 ,2 ,1, 17 , 8, 5, 9};

    // int row,col;
    // for ( col = 0; col < 4; col++)
    // {
    // for ( row = 0; row < 4; row++)
    // {
    //     if(col%2==0)
    //     cout << arr[row][col] << endl;
    //     else{
    //         cout << arr[3-row][col] << endl;
    //     }
    // }
    
    // }
    // int arr[4][4] ={3, 6, 4, 2, 7 , 8, 11, 5 , 9, 3 ,2 ,1, 17 , 8, 5, 9};

    // int row,col;
    // for ( row = 0; row < 4; row++)
    // {
    // for ( col = 0; col < 4; col++)
    // {
    //     cout << arr[row][col] << endl;
       
    // }
    
    // }

    int arr[4][4] = {1, 2, 3, 4, 5, 6,7 ,8, 9, 10, 11, 12 , 13, 14, 15, 16};

    int top = 0;
    int bottom = 3;
    int start = 0;
    int end = 3;
         while( top <= bottom)
         {
            if( start <= 3 && end >=0)
           { 
            swap(arr[top][start], arr[bottom][end]);
            start++;
            end--;
           }
         start = 0;
         end = 3; 
           if ( 4 % 2)
           {
            if( start < end)
            {swap(arr[top][start], arr[bottom][end]);
            start++;
            end--;
            }
            
           }
           
         top++;
         bottom--;
        
         }
        
    

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
             cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    
    
    
    
    
}