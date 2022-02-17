#include<bits/stdc++.h>
using namespace std;

int lsearch(int arr[], int n, int e) {
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==e) {
            return i;
        }
    }
    return -1;
}

int main() {
    // linear search
    int arr[100],n,e;
    cout<<"enter number of terms : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"element to be found :";
    cin>>e;
    cout<<"element was found at "<<lsearch(arr,n,e);
    
    return 0;
}