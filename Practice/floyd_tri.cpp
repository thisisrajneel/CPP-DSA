#include<iostream>
using namespace std;

int main()
{
    /*
    
    1
    2 3
    4 5 6
    7 8 9 10
    
    */

    int r,num=1;
    cout<<"enter number of rows : ";
    cin>>r;
    for(int i=0;i<r;++i)
    {
        for(int j=0;j<=i;++j)
        {
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
    }
    return 0;
}