#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;

    cout<<"enter number to be reversed :";
    cin>>n;
     
    while(n>0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }

    cout<<"reversed number is :"<<rev;

    return 0;
}