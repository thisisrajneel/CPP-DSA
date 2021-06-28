#include<bits/stdc++.h>
using namespace std;

int power(int n, int p)
{   
    if(p==1)
        return n;
    int rest=power(n,p-1);
    return n*rest;
}

int main()
{
    int n, p;
    cout<<"enter number and power :";
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}