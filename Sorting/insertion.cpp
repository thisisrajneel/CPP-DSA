#include<iostream>
#include<limits.h>
using namespace std;

void show(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//insert an element from unsorted array to its correct position in sorted array

int main()
{
    int arr[100],n;
    cout<<"enter the number of elements : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    show(arr,n);

    return 0;
}