#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    int p;
    int q;
    cin >> n >> m >> p >> q;

    int ****ptr = new int ***[n];

    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int **[m];
        for (int j = 0; j < m; j++)
        {
            ptr[i][j] = new int*[p];
            for (int k = 0; k < p; k++)
            {
                ptr[i][j][k] = new int[q];
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
  
        for (int j = 0; j < m; j++)
        {
       
            for (int k = 0; k < p; k++)
            {
             for (int l = 0; l < q ; l++)
             {
                   ptr[i][j][k][l] = l + 1;
             }
             
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
  
        for (int j = 0; j < m; j++)
        {
       
            for (int k = 0; k < p; k++)
            {
             for (int l = 0; l < q; l++)
             {
                 cout <<  ptr[i][j][k][l];
             }
             
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
  
        for (int j = 0; j < m; j++)
        {
       
            for (int k = 0; k < p; k++)
            {
              delete[] ptr[i][j][k]; 
            }
            delete[] ptr[i][j];
            
        }
        delete[]ptr[i];
        
    }
    delete[] ptr;
    
}