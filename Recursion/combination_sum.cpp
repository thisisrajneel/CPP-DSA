#include<bits/stdc++.h>
using namespace std;

// in combination, elements can be repeated. in subsequence, elements cannot be repeated.
void comboSum(int index, vector<int> arr, vector<int> a, int sum) {
    if(index >= arr.size() || sum<0) return;
    if(sum == 0) {
        for(auto x:a) {
            cout<<x<<' ';
        }
        cout<<endl;
        return;
    }
    // take
    a.push_back(arr[index]);
    comboSum(index, arr, a, sum-arr[index]);

    // leave
    a.pop_back();
    comboSum(index+1, arr, a, sum);
}

int main() {
    
    int k;
    cout<<"enter value of sum (k) : ";
    cin>>k;
    cout<<"enter number of (distinct) terms in array : ";
    int n;
    cin>>n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout<<"unique subsequences with sum (k) : "<<endl;
    comboSum(0, v, {}, k);
    
    return 0;
}