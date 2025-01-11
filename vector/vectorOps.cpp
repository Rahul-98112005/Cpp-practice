#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main()
{
    // create vector

    // vector<int>v;
    // vector<int>v1(5, 1);
    // cout<<"Sie of v: "<<v.size()<<endl;
    // cout<<"Sie of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout<<"Sie of v: "<<v.size()<<endl;
    // cout<<"Sie of v: "<<v.capacity()<<endl;
    // cout<<"Sie of v1: "<<v1.size()<<endl;
    // cout<<"Sie of v1: "<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"Sie of v1: "<<v1.size()<<endl;
    // cout<<"Sie of v1: "<<v1.capacity()<<endl;

    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(22);
    // vnew.push_back(88);
    // vnew.push_back(5);
    // vnew.push_back(56);
    // vnew.push_back(6);
    // vnew.pop_back();
    // cout<<"Sie of vnew: "<<vnew.size()<<endl;
    // cout<<"Sie of vnew: "<<vnew.capacity()<<endl;

    // vnew.erase(vnew.begin()+1);
    // cout<<"Sie of vnew: "<<vnew.size()<<endl;
    // cout<<"Sie of vnew: "<<vnew.capacity()<<endl;

    // for( auto it = vnew.begin(); it!= vnew.end(); it++)
    // {
    //     cout<<*it<<" " << endl;
    // }


    // vnew.insert(vnew.begin()+1, 50);

    //   for( auto it = vnew.begin(); it!= vnew.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    // v. clear()l // remove all the element

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(25);
    ans.push_back(35);
    ans.push_back(25);
    ans.push_back(125);
    sort(ans.begin(), ans.end());// inc order
    sort(ans.begin(), ans.end(), greater<int>());// dec order

    for (int i = 0; i < ans.size(); i++)
    {
        cout << " "<< ans[i] <<" ";
    }
    
  sort(ans.begin(), ans.end());

  cout<<binary_search(ans.begin(), ans.end(), 54)<< endl; // binary search

  cout<<find(ans.begin(), ans.end(), 25) - ans.begin();


}