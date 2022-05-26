#include<bits/stdc++.h>
using namespace std;

void comboSum2(int index, vector<int> arr, vector<int> a, int target) {

    if(target == 0) {
        for(auto x:a) {
            cout<<x<<' ';
        }
        cout<<endl;
        return;
    }
    for(int i = index; i<arr.size(); ++i) {
        if(i>index && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        a.push_back(arr[i]);
        comboSum2(index+1, arr, a, target-arr[i]);
        a.pop_back();

    }
}

int main() {
    
    int k;
    cout<<"enter value of sum (k) : ";
    cin>>k;
    cout<<"enter number of terms in array : ";
    int n;
    cin>>n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cout<<"unique combinations with sum (k) : "<<endl;
    comboSum2(0, v, {}, k);
    
    return 0;
}