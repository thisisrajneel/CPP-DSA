#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    cout<<"Array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rev(int arr[], int n) {
    
    for (int i = 0, j = n-1; i < n/2; i++, j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
}

int main() {
    // reverse an array
    int arr[100],n;
    cout<<"enter size of array :";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    print(arr, n);
    rev(arr, n);
    print(arr, n);
    return 0;
}