#include<bits/stdc++.h>
using namespace std;

// finding pivot element index in a rotated and sorted array
// ex : 3 4 5 6 7 8 1 2  .....  ans = 5

int pivot(vector<int> arr) {

    int start = 0;
    int end = arr.size()-1;
    int ans;

    while (start<end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            ans = mid;
        }
        if(arr[mid]>arr[start]) {
            start = mid+1;
        }
        else {
            end = mid;
        }
    }
    return ans;
}

int main () {
    
    vector<int> arr;
    int n;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<pivot(arr)<<endl;
    

    return 0;
}