#include<iostream>
#include<algorithm>
using namespace std;

int bin(int arr[],int n, int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int key,n,arr[100];
    cout<<"enter number of elements : ";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);  //sorting the array, binary sort always in sorted array
    cout<<"enter the key to be searched : ";
    cin>>key;
    cout<<bin(arr,n,key);
    return 0;
}