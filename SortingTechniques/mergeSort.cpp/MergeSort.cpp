#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start , int mid, int end)
{
    vector<int>temp(end-start + 1);
    int left = start, right = mid + 1, index = 0;
    while(left <= mid && right <= end)
    {
        if(arr[left] <= arr[right])
        {
            temp[index] = arr[left];
             left++, index++;
        }
        else{

            temp[index] = arr[right];
             right++, index++;

        }

    }

    while(left <= mid)
    {
        temp[index] = arr[left];
         left++, index++;

    }
    while(right <= end)
    {
        temp[index] = arr[end];
         right++, index++;

    }

    index = 0;

    while (start <= end)
    {
        arr[start] = temp[index];
        start++, index++; 
    }
    
}

void mergeSort(int arr[], int start, int end)
{

    if(start == end)
    return;

    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main() {
    int arr[] = {55,4,3,2,1};
    int start = 0;
    int end = 4;
    mergeSort(arr,start,end);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    


}