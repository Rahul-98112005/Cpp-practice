#include<iostream>
using namespace std;

int main() {


    int n;
    cout << "Enter the nuber: ";
    cin>>n; 



    for (int i = 1; i <=4 ; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           cout << j;
            
        }


        for (int j = 1; j <= 2*n-1; j++)
        {
            cout <<" ";
        }
        


         for (int j = i; j >= 1 ; j--)
        {
           cout << j;
            
        }

        cout << endl;

    }

    













    
    // for (int i = 1; i <= 5 ; i++)
    // {
    //     for (int j = 1; j <= 5-i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= 2*i-1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
        
        
    // }
    // for (int i = 5; i >= 1 ; i--)
    // {
    //     for (int j = 5-i; j >=1; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 2*i-1; j >= 1; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;

        
    // }
    

}
