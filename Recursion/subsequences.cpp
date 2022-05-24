#include<bits/stdc++.h>
using namespace std;

void display(vector<int> v) {
    for(auto x : v) {
        cout<<x<<' ';
    }
    cout<<endl;
}

// in combination, elements can be repeated. in subsequence, elements cannot be repeated.
void sub(int index, vector<int> arr, vector<int> a) {
    if(index >= arr.size()) {
        display(a);
        return;
    }
    // take or leave the particular subsequence into the array

    // take it (add it)
    a.push_back(arr[index]);
    sub(index+1, arr, a);
    
    // leave it (remove it)
    a.pop_back();
    sub(index+1, arr, a);
}

int main() {
    
    vector<int> v = {};
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout<<"subsequences : "<<endl;
    sub(0, v, {});
    
    
    return 0;
}