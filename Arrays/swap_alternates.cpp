#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int n) {
    for (int i = 1, j = 0; i < n; i+=2, j+=2)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
}

int main() {
    int arr[50],n;
    cout<<"enter number of terms :";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    swap(arr, n);
    cout<<endl;
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}