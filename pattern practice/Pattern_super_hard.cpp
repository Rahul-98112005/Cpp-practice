#include<iostream>
using namespace std;
int main () {



    // pattern question 1

    // int row;
    // int col;
    // for ( row = 1; row <= 5; row++)
    // {
    //       for ( col = 1; col <= 5-row; col++)
    //       {
    //         cout << " "; 
    //       }
    //       for ( col = 1; col <= (2*row - 1); col++)
    //       {
    //         cout << "*"; 
    //       }
    //          for ( col = 1; col <= 5-row; col++)
    //       {
    //         cout << " "; 
    //       }
    //       cout<<endl;
    // }


    // pattern question 2

    // int row;
    // int col;
    // for ( row = 1; row <= 5; row++)
    // {
    //   for( col = 1; col <= 5-row ; col++)
    //   {
    //     cout << " ";
    //   }
    //   for( col = 1; col <= row ; col++)
    //   {
    //     cout << col;
    //   }
    //   for( col = row-1; col >= 1 ; col--)
    //   {
    //     cout << col;
    //   }
    //      for( col = 1; col <= 5-row ; col++)
    //   {
    //     cout << " ";
    //   }
    //   cout << endl;
    // }
    

    //pattern question 3
    // int row;
    // int col;
    // for (row = 5; row >=1; row--)
    // {
    //   for ( col = 1; col <= 5-row; col++)
    //   {
    //     cout<<" ";
    //   }
    //   for ( col = 1; col <= 2*row-1; col++)
    //   {
    //     cout<<"*";
    //   }
    //     cout << endl;
    // }
    

    // pattern question 4
    int row;
    int col;
    for ( row = 4; row >= 1; row--)
    {
    
      for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
       for ( col = 1; col <= 8-2*row; col ++)
      {
        cout << "  ";
      }
          for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
    
      cout << endl;
    }
    for ( row = 1; row <= 4; row++)
    {
    
      for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
       for ( col = 1; col <= 8-2*row; col ++)
      {
        cout << "  ";
      }
          for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
    
      cout << endl;
    }

  // int row;
  // int col;
  // for ( row = 1;  row <= 4; row++)
  // {
  //   for ( col = 1; col <= row; col++)
  //   {
  //     cout << "* ";
  //   }
  //   for ( col = 1; col <= 8-2*row; col++)
  //   {
  //     cout << "  ";
  //   }
  //   for ( col = 1; col <= row; col++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl; 
  // }
  // for ( row = 4;  row >= 1; row--)
  // {
  //   for ( col = 1; col <= row; col++)
  //   {
  //     cout << "* ";
  //   }
  //   for ( col = 1; col <= 8-2*row; col++)
  //   {
  //     cout << "  ";
  //   }
  //   for ( col = 1; col <= row; col++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl; 
  // }


// pattern 5

// int row;
// int col;
// for ( row = 1; row <= 5; row++)
// {
//   for ( col = 1; col <= 5-(row-1); col++)
//   {
//     cout << " ";
//   }
//   for ( col = 1; col <= row; col++)
//   {
//     cout << "* ";
//   }
//   cout << endl;
// }





  






    return 0;
    
}
