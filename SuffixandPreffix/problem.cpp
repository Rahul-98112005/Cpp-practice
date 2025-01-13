#include<iostream>
#include<vector>
#include<algorithm>
#include <limits.h>
using namespace std;

int main () {

//Max difference between 2 elements

    vector<int>arr = {7, 9, 5, 6, 3, 2};
    int n= arr.size();

    int suffix = arr[n-1], ans = INT_MIN;

    for (int i = n-2 ; i >= 0 ; i--)
    {
        suffix = max(suffix, arr[i+1]);
        ans = max(ans, suffix-arr[i]);

    }
    cout << ans;


}