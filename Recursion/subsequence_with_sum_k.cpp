#include<bits/stdc++.h>
using namespace std;

// in combination, elements can be repeated. in subsequence, elements cannot be repeated.
void sumSubsequence(int index, vector<int> arr, vector<int> a, int sum, int k) {
    if(index >= arr.size()) {
        if(sum == k) {
            for( auto x:a) {
                cout<<x<<' ';
            }
            cout<<endl;
        }

        return;
    }

    a.push_back(arr[index]);
    sum+=arr[index];
    sumSubsequence(index+1,arr,a,sum,k);

    a.pop_back();
    sum-=arr[index];
    sumSubsequence(index+1,arr,a,sum,k);
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

    cout<<"subsequences with sum (k) : "<<endl;
    sumSubsequence(0, v, {}, 0, k);
    
    return 0;
}