#include<iostream>
#include<vector>
using namespace std;

// void subSequence(int arr[],vector<vector<int>>&ans,vector<int>temp1, int index, int n)
// {
//     if(index == n)
//     {
//         ans.push_back(temp1);
//         return;
//     }

//     subSequence(arr,ans,temp1,index+1,n);
//     temp1.push_back(arr[index]);
//     subSequence(arr,ans,temp1,index+1,n);


// }
void genParth(int n, string &temp, vector<string>&ans, int  left, int right)
{

    if(left+right == 2*n)
    {
        ans.push_back(temp);
        return;
    }
   
    if(left < n)
    {
        temp.push_back('(');
        genParth(3,temp,ans,left+1,right);
        temp.pop_back();
    }
    if(right < left)
    {
        temp.push_back(')');
        genParth(3,temp,ans,left,right+1);
        temp.pop_back();
    }
   


}

int main(){
    vector<string>ans;
    string temp;
    int left = 0;
    int right = 0;
    int n = 3;
    genParth(n,temp,ans,left,right);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
        
    }
    

}