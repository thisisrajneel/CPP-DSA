#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n) {

    int ans = 0;

    // creating an XOR-d array of the array
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    // XOR-ing that array with the numbers from 1 to N-1
    for (int j = 1; j < n; j++)
    {
        ans=ans^j;
    }

    // only duplicate element left after XOR-ing
    return ans;
    
    
}

int main() {
    
    // array contains all numbers from 1 to N-1 at least once
    // and only one element twice. find that element.
    
    int arr[100], n;
    
    cout<<"enter the number of terms : ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"the duplicate element is : "<<duplicate(arr,n);
    
    return 0;
}