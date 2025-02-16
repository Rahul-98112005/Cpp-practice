#include<iostream>
#include<vector>
using namespace std;

// void printAllSubSetSum(int arr[], int index, int n, int sum)
// {

//     if(index==n)
//     {
//         cout << sum << endl;
//         return;
//     }   


      
//     printAllSubSetSum(arr,index+1,n,sum);
//     printAllSubSetSum(arr,index+1,n,sum+arr[index]);
    
// }

// bool findTarget(int arr[], int index, int n, int target)
// {

//     if(target == 0)
//     {
//         return 1;
//     }   

//     if(index==n || target < 0)
//     {
//         return 0;
//     }   
   

//    return findTarget(arr,index+1,n,target) || findTarget(arr,index+1,n,target-arr[index]);
      
    
    
// }

int findTarget(int arr[], int index, int n, int target)
{

    if(target == 0)
    {
        return 1;
    }   

    if(index==n || target < 0)
    {
        return 0;
    }   
   

   return findTarget(arr,index+1,n,target) + findTarget(arr,index+1,n,target-arr[index]);
      
    
    
}



int main(){

    int arr[] = {2,5,6,1};
    int index = 0;
    int n = 4;
    int Target = 8;
   cout << findTarget(arr,index,n,Target);

}