#include<bits/stdc++.h>
using namespace std;

void subsetSum(int index, vector<int> &arr, int sum=0) {
    if(index>=arr.size()) {
        cout<<sum<<' ';
        return;
    }
    subsetSum(index+1, arr, sum+arr[index]);
    
    subsetSum(index+1, arr, sum);
}

int main() {
    
    int n;
    cout<<"enter the number of terms in array : ";
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    subsetSum(0, arr);
    
    
    return 0;
}