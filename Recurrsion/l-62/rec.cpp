#include<iostream>
#include<vector>
using namespace std;

// void subSetSum(int arr[],vector<vector<int>>subSet,vector<int>temp, int index, int n, int sum)
// {
//     if(index == n)
//     {
//         subSet.push_back(temp);
//         for ( int i = 0; i <subSet.size() ; i++)
//         {
//             cout << "{";
//             for (int j = 0; j < subSet[i].size(); j++)
//             {
//                 cout  << subSet[i][j];
//             }
//             cout << "}";
//         }
//         cout << "Sum of these Subset is: ";
        
//         cout << sum << endl;
//         return;
//     }

//     subSetSum(arr,subSet,temp,index+1,n,sum);
//     temp.push_back(arr[index]);
 
//     sum += arr[index];
//     subSetSum(arr,subSet,temp,index+1,n,sum);


// }


// Target Sum
void permut(int arr[],vector<vector<int>>&ans,vector<int>&temp,vector<int>visited)
{
    if(temp.size() == visited.size())
    {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < visited.size(); i++)
    {
        if(visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permut(arr,ans,temp,visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
    
}

int main() {
     
    // vector<vector<int>>subSet;
    // vector<int>temp;
    // int arr[] = {3,4,5};
    // int index = 0;
    // int n = 3;
    // int sum = 0;
    // subSetSum(arr,subSet,temp,index,n,sum);
    int arr[] = {1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    vector<int>visited(3,0);
    permut(arr,ans,temp,visited);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
        
    }
    
    




}