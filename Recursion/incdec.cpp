#include<bits/stdc++.h>
using namespace std;

void dec(int n)
{
    if(n==0){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n)
{
    if(n==0){
        cout<<n<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
/*
0 1 2 3 4 5
dec :
dec(5) print(5)
dec(4) print(4)
...    ...

inc(0)  o 1 2 3 4 5 6
inc(1)
inc(2)
inc(3)
inc(4)
inc(5)
main()
*/
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"\nincreasing :\n";
    inc(n);
    cout<<"\ndecreasing :\n";
    dec(n);
    return 0;
}