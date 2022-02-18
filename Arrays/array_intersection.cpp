#include<bits/stdc++.h>
using namespace std;

vector<int> inter(int arr1[], int n, int arr2[], int m) {
    vector<int> ans = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j]) {
                ans.push_back(arr2[j]);
                arr2[j]=INT_MIN;
                break;
            }
        }
    }

    if(ans.size() == 0) {
        return {-1};
    }

    return ans;
    
}

int main() {

    int arr1[100], arr2[100], n, m;

    cout<<"enter the number of terms in 1st array : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }

    cout<<"enter the number of terms in 2nd array : ";
    cin>>m;

    for (int j = 0; j < m; j++)
    {
        cin>>arr2[j];
    }

    cout<<"common elements are : ";
    for(auto& it : inter(arr1, n, arr2, m)) {
        cout<<it<<" ";
    }
    
    return 0;
}