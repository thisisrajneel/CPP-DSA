#include<iostream>
using namespace std;

int main()
{
    /*
    
    n=3

    *         *
    * *     * *
    * * * * * *
    * * * * * *
    * *     * *
    *         *
    
    */

    int n;
    cout<<"enter number of rows :";
    cin>>n;

    //for first half
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<"* ";
        }

        for(int k=1;k<=2*(n-i);++k)
        {
            cout<<"  ";
        }

        for(int l=1;l<=i;++l)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    
    //for second half
    for(int i=n;i>0;--i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<"* ";
        }

        for(int k=1;k<=2*(n-i);++k)
        {
            cout<<"  ";
        }

        for(int l=1;l<=i;++l)
        {
            cout<<"* ";
        }

        cout<<endl;
    }


    return 0;
}