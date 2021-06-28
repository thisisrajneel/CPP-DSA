#include<iostream>
using namespace std;

int updateBit(int n, int pos, int val)
{
    if(val==1){
        return (n | (1<<pos));
    }
    else{
        return (n & (~(1<<pos)));
    }
}

int main()
{
    int n, pos, val;
    cout<<"enter number, position to update and updated value : ";
    cin>>n>>pos>>val;
    if((val==1) || (val==0)){
        cout<<updateBit(n,pos,val);
    }
    else{
        cout<<"enter valid value for bit";
    }
    return 0;
}