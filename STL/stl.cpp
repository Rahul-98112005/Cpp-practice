#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
    int age;
    string name;

    bool operator < (const Person &other) const{
        return age < other.age;
    }
};

int main() {

    // PAIR

    // pair<string,int>p;

    // p = make_pair("Rahul", 20);
    // p = make_pair("Varun", 21);

    // cout << p.first<< " " << p.second;

    // pair<pair<string,int>,int>p2;

    // p2.first.first = "Rahul";
    // p2.first.second = 20;
    // p2.second = 21;

    // cout <<  p2.first.first<<endl;
    // cout <<  p2.first.second<<endl;
    // cout << p2.second;

    // list<int>l;
    // l.push_back(10);
    // l.push_front(20);
    // l.push_back(30);
    // l.push_back(33);
    // l.push_back(31);
    // l.pop_back();
    // l.pop_front();

    // cout << l.size() << endl;

    // cout << l.front() << " " << l.back() << endl;

    // for(auto it = l.begin(); it!= l.end(); it++)
    // {
    //     cout << " " << *it << endl;
    // }



    // set<Person>s;
    // Person p1,p2,p3;
    // p1.age = 10, p1.name="Rahul";
    // p2.age = 20, p1.name = "Varun";
    // p3.age = 11, p1.name = "yash";

    // s.insert(p1);
    // s.insert(p2);
    // s.insert(p3);

    //  for(auto it = s.begin(); it!= s.end(); it++)
    // {
    //     cout <<it->age<< " " <<it->name<< endl;
    // }

    // multiset<int>s;

    // s.insert(10);
    // s.insert(10);
    // s.insert(11);
    // s.insert(12);
    // s.insert(13);
    // s.insert(14);

    unordered_set<int>s;

    s.insert(10);
    s.insert(13);
    s.insert(9);
    s.insert(7);
    s.insert(77);
    s.insert(33);

     for(auto it = s.begin(); it!= s.end(); it++)
    {
        cout <<*it<< endl;
    }

//     map<int,int>m;
//     m.insert(make_pair(20,30));
//     m.insert(make_pair(30,310));
//     m.insert(make_pair(40,230));
//     m.insert(make_pair(20,230));
//     m.insert(make_pair(50,30));
//     m[100] = 60;

    
//      for(auto it = m.begin(); it!= m.end(); it++)
//     {
//         cout <<it->first<<" "<<it->second<< endl;
//     }
//    unordered_map<int,int>s;
//     s.insert(make_pair(20,30));
//     s.insert(make_pair(30,310));
//     s.insert(make_pair(40,230));
//     s.insert(make_pair(20,230));
//     s.insert(make_pair(50,30));
//     s[100] = 60;

    
//      for(auto it = s.begin(); it!= s.end(); it++)
//     {
//         cout <<it->first<<" "<<it->second<< endl;
//     }
//    unordered_multimap<int,int>s;
//     s.insert(make_pair(20,30));
//     s.insert(make_pair(20,10));
//     s.insert(make_pair(30,310));
//     s.insert(make_pair(40,230));
//     s.insert(make_pair(20,230));
//     s.insert(make_pair(50,30));

    
//      for(auto it = s.begin(); it!= s.end(); it++)
//     {
//         cout <<it->first<<" "<<it->second<< endl;
//     }






}