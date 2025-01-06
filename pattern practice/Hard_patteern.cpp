#include <iostream>
using namespace std;
int main () {

    // Pattern 1
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

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 5; j >= 1; j--)
    //     {
    //         if (i >= j)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Pattern 2
    /*
    Example:
    Input: (No input required)
    Output:
         1
        22
       333
      4444
     55555
    */

    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5 - (i - 1); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // Pattern 3
    /*
    Example:
    Input: (No input required)
    Output:
         1
        12
       123
      1234
     12345
    */

    // int row, col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= 5 - (row - 1); col++)
    //     {
    //         cout << " ";
    //     }
    //     for (col = 1; col <= row; col++)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    // Pattern 4
    /*
    Example:
    Input: (No input required)
    Output:
         1
        21
       321
      4321
     54321
    */

    // int row, col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for (col = 1; col <= 5 - (row - 1); col++)
    //     {
    //         cout << " ";
    //     }
    //     for (col = row; col >= 1; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    return 0;
}
