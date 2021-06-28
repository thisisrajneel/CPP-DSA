#include<iostream>
using namespace std;

int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int main()
{
    int n,pos;
    cout<<"enter number and position to clear bit : ";
    cin>>n>>pos;
    cout<<clearBit(n,pos)<<endl;
    return 0;
}