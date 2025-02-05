#include<iostream>
using namespace std;
int main(){

  int n;
  int m;
  int k;
  cin >> n >> m >> k;

  int ***ptr = new int**[n];

  for (int i = 0; i < n ; i++)
  {
     ptr[i] = new int *[m];
     for (int j = 0; j < m; j++)
     {
        ptr[i][j] = new int[k];
     }
     
  }
  for (int i = 0; i < n ; i++)
  {
     for (int j = 0; j < m; j++)
     {
        for (int p= 0; p < k ; p++)
        {
            ptr[i][j][p] = p + 1;
        }
        
     }
     
  }
  for (int i = 0; i < n ; i++)
  {
     for (int j = 0; j < m; j++)
     {
        for (int p= 0; p < k ; p++)
        {
            cout << ptr[i][j][p];
        }
        cout << endl;
        
     }
     cout << endl;
     
  }
  for (int i = 0; i < n ; i++)
  {
     for (int j = 0; j < m; j++)
     {
      
           delete[] ptr[i][j];
     
        
     }
    delete[] ptr[i];
     
  }
  delete [] ptr;



  return 0;
  

}