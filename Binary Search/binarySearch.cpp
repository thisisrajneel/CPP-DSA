#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int element) {
    int start=0;
    int end=size-1;

    while (start<=end)
    {
        // int mid=(start+end)/2;
        int mid = s + (e-s)/2; // to keep values within range of int

        if(arr[mid]==element) {
            return mid;
        }

        else if(element>arr[mid]) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return -1;
    
}

int main() {
    
    int arr[100], n, e;
    cin>>n>>e;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<< "index of element is : "<<binarySearch(arr,n,e);
    
    return 0;
}