#include<iostream>
using namespace std;
int main() {

    // Pattern printing 1
    /*
    Example:
    Input: (No input required)
    Output:
    *    
    **   
    ***  
    **** 
    *****
    */

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (i >= j)
    //         {
    //             cout << '*';
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Pattern printing 2
    /*
    Example:
    Input: (No input required)
    Output:
    1     
    1 2   
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
    */

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (i >= j)
    //             cout << j << " ";
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }

    // Pattern printing 3
    /*
    Example:
    Input: (No input required)
    Output:
    1     
    2 1   
    3 2 1 
    4 3 2 1 
    5 4 3 2 1 
    */

    // for (int i = 1; i <= 5 ; i++)
    // {
    //     for (int j = 0; j <= 5; j++)
    //     {
    //         if (i > j)
    //         {
    //             cout << i - j << " ";
    //         }
    //         else
    //         {
    //             cout <<" ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Pattern printing 4
    /*
    Example:
    Input: (No input required)
    Output:
    a    
    b b  
    c c c
    d d d d
    e e e e e
    */

    // for (int i = 0; i < 5 ; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (i >= j)
    //         {
    //              cout << char('a' + i) << " ";
    //         }
    //         else
    //         {
    //             cout <<" ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Pattern printing 5
    /*
    Example:
    Input: (No input required)
    Output:
    12345
    1234
    123
    12
    1
    */

    // int i;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - (i - 1); j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // Pattern printing 6
    /*
    Example:
    Input: (No input required)
    Output:
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
    */

    // for (int i = 1; i <= 5 ; i++)
    // {
    //     for (int j = 5; j >= 5 - (i - 1); j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // };

    return 0;
}
