#include<iostream>
#include<vector>
using namespace std;
// void print(int n)
// {
//     if(n==0)
//     return;

//     cout << "Coder army" << endl;
//      print(n-1);

// }
// void oddPrint(int n)
// {
//     if(n==1)
//     {
//         cout << 1;
//         return;
//     }

//     cout << n;
//     oddPrint(n-2);

// }
// void allPrint(int n)
// {
//     if(n==1)
//     {
//         cout << 1;
//         return;
//     }


//     allPrint(n-1);
//     cout << n;

// void Table(int n, int mul)
// {
//     if( mul == 10)
//     {
//         cout << n*10;
//         return;
//     }

//     cout << n*mul << endl;
//     Table(n,mul+1);
    
// }
// int cubesOfnum(int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }

//     return n*n*n + cubesOfnum(n-1);

    

// }

// bool check(int n,int count)
// {
    
//     if(count == n)
//     return 1;
    

//     if(n == 2 )
//     return 1;

//     if (n < 0)
//     return 0;

//     if(n%count == 0)
//     return 0;


//     return check(n, count+1);


// }

// int findMaxi(int arr[],int n,int index)
// {
//     if(index == n)
//     {
//         return 0;
//     }

//     return max(arr[index], findMaxi(arr , n, index+1));

// }
// int findMul(int arr[],int n,int index)
// {
//     if(index == n)
//     {
//         return 1;
//     }

//     return arr[index] * findMul(arr , n, index+1);

// }

// bool checkpal(string s, int start, int end)
// {
//     if(start >= end)
//     return 1;

//     if(s[start] == s[end])
//     return checkpal(s, start+1, end-1);
//     else{
//         return 0;
//     }
     

// }

// void lowToUp(string &s,int end)
// {
//     if(end == -1)
//       return;
//     char c = 'A' + s[end] - 'a';
//     s[end] = c;

//     lowToUp(s,end-1);
// }

void vowel()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int>a(n);
    vector<int>b(m);
    vector<int>ans;(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
   
   for (int i = 0; i < n; i++)
   {
    ans.push_back(b[0]-a[i]);
    for (int j = 1; j < n; j++)
   {
    ans.push_back(b[0]-a[i]);
   }
      
   
   for (int i = 0; i < n-1; i++)
   {
     if(ans[i] > ans[i-1])
     
        return;
     }
   }
   

   cout << "Yes";
   
   
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vowel();
    }

    return 0;
}