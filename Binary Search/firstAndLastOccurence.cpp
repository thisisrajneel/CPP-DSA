#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> arr, int k) {
    int start = 0;
    int end = arr.size()-1;
    int ans;

    while (start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] > k) {
            end = mid-1;
        }
        else if (arr[mid] == k) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }

    return ans;
    
}

int lastOccurence(vector<int> arr, int k) {
    int start = 0;
    int end = arr.size()-1;
    int ans;

    while (start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] > k) {
            end = mid-1;
        }
        else if (arr[mid] == k) {
            ans = mid;
            start = mid+1;
        }
        else {
            start = mid+1;
        }
    }

    return ans;
    
}

pair<int, int> firstAndLastOccurence(vector<int> arr, int k) {
    pair<int, int> ans;

    ans.first = firstOccurence(arr, k);
    ans.second = lastOccurence(arr, k);

    return ans;
}

int main() {
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        vector<int> arr;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);

        }

        pair<int, int> ans = firstAndLastOccurence(arr, k);

        cout<<ans.first<<" "<<ans.second<<endl;        
        
    }    

    return 0;
}