#include<iostream>
#include<math.h>
using namespace std;

int bin2dec(int n)
{
    int sum,rem,dec=0;
    int i=0;
    while(n>0)
    {
        rem=n%10;
        sum=rem*pow(2,i);
        dec+=sum;
        n/=10;
        ++i;
    }
    return dec;
}

int main()
{
    int n;
    
    cout<<"enter the binary number : ";
    cin>>n;

    cout<<"decimal number is : "<<bin2dec(n);
    return 0;
}