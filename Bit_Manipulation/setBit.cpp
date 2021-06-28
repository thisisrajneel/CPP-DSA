#include<iostream>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    int n,pos;
    cout<<"enter number and position to set bit : ";
    cin>>n>>pos;
    cout<<setBit(n,pos)<<endl;
    return 0;
}