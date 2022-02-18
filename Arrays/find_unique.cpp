#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n) {
    int ans=0;
    for (int  i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    
    return ans;
}

int main() {
    int arr[100], n;
    cout<<"enter number of terms : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"unique element is : "<<findUnique(arr, n);

    return 0;
}