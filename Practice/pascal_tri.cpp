#include<iostream>
using namespace std;

int fac(int n)
{
    if(n==0)
        return 1;
    
    else
    {
        int f=1;
        for(int i=2;i<=n;++i)
            f*=i;
    
        return f;
    }
}

int comb(int n, int r)
{
    return (fac(n)/(fac(n-r)*fac(r)));
}

void pascal(int n)
{
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<=i;++j)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;

    pascal(n);
    return 0;
}