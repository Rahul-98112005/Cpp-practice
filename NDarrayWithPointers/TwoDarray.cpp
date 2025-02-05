#include<iostream>
using namespace std;
int main(){

    // 2d array
    int n;
    int m;
    cout << "Enter the rows";
    cin >> n;
    cout << " Enter the no of columns";
    cin >> m;
    int **ptr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
      
        

    }
    for(int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < m; j++)
        {
            ptr[i][j] = i +1; 
        }
        

    }
    for(int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j];
        }
        cout << endl;
        

    }

}