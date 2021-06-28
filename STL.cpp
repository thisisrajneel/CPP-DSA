#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool f(int x, int y){
    return x>y;
}

int main()
{
    // vector<int>a={11,42,3,24,5};
    // sort(a.begin(),a.end()); // 3,5,11,24,42
    // bool present = binary_search(a.begin(),a.end(),36); //false
    // a.push_back(100);
    // present = binary_search(a.begin(),a.end(),100); // true
    // a.push_back(100);
    // a.push_back(100);
    // a.push_back(100);
    // a.push_back(100);
    // a.push_back(134);
    // // 3,5,11,24,42,100,100,100,100,100,134
    // vector<int>::iterator it = lower_bound(a.begin(),a.end(),100); //5 >=
    // vector<int>::iterator it2 = upper_bound(a.begin(),a.end(),100); //10 >
    
    // cout<<*it<<*it2<<endl;
    // cout<<it2-it<<endl;

    // sort(a.begin(), a.end(), f);

    // for(auto element:a){
    //     cout<<element<<" ";
    // }

    // SET

    set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(3);
    s.insert(-10);
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    // -10 1 3 12
    auto it = s.find(-2);
    if(it == s.end()) {
        cout<<"element not found"<<endl;
    }
    else {
        cout<<*it<<" is present"<<endl;
    }

    auto it2 = s.lower_bound(-1);
    auto it3 = s.upper_bound(2);
    cout << *it2 << " " << *it3;
    if(it3 == s.end()){
        cout<<"can't find something like that";
    }
    



    return 0;
}