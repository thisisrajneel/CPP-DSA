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

//repeatedly swap two numbers if they are in wrong order

int main()
{
    int n,arr[100];
    cout<<"enter the number of elements :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    show(arr,n);    
    return 0;
}