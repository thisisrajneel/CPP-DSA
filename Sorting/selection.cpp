#include<iostream>
using namespace std;

void show(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//select the smallest element from unsorted array and replace at the beginning

int main()
{
    int n,arr[100],temp;
    cout<<"enter the number of elements :";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        
        cout<<"array after pass "<<i+1<<" :";
        show(arr,n);
    }
        
    return 0;
}