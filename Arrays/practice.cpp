#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // finding max and min in an array
    int n;
    int arr[n];
    int min, max;

    cout<<"enter number of terms :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for (int j = 0; j < n; j++)
    {
        if(arr[j]>max) {
            max=arr[j];
        }

        if(arr[j]<min) {
            min=arr[j];
        }
    }
    
    cout<<"max : "<<max<<" min : "<<min;
    
    return 0;
}