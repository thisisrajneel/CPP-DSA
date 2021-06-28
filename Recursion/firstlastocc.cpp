#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    
    else{
        return firstocc(arr,n,i+1,key);
    }
}

int lastocc(int arr[], int n, int i, int key)
{
    last=firstocc(arr,n,i,key);
    if()
}

int main()
{
    int arr[] = {1,2,3,2,1,2};
    int key;
    cout<<"enter key :";
    cin>>key;
    cout<<"first occurence : ";
    cout<<firstocc(arr,6,0,key);
    return 0;
}