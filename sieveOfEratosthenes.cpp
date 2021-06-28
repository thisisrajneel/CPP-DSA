#include<iostream>
using namespace std;

void sieve(int lim)
{
    int arr[10000]={0}; //creates array with 10000 elements, all with value 0
   
    for (int i = 2; i<=lim ; i++)
    {
        if(arr[i]==0){
            for(int j=(i*i);j<=lim;j+=i)
            {
                arr[j]=1; //using index as actual numbers and value as indicator/flag
            }
        }
        
    }

    for (int k = 2; k <= lim; k++)
    {
        if(arr[k]==0){
            cout<<k<<" "; //we print the index number, not value
        }
    }
}

int main()
{
    int lim;
    cout<<"enter the number upto which you want prime numbers : ";
    cin>>lim;
    sieve(lim);
    return 0;
}