#include<iostream>
using namespace std;

void pfsieve(int num)
{
    int spf[10000] = {1};
    
    for (int i = 2; i <= num; i++) //creating array with smallest prime factor for index numbers
    {
        if(spf[i]==1){
            spf[i]=i;
        }

        for (int j = i*i; j <= num; j+=i)
        {
            spf[j]=i;
        }
        
    }

    while(num!=1)
    {
        cout<<spf[num]<<" ";
        num/=spf[num];
    }
    
}

int main()
{
    int num;
    cout<<"enter the number to be prime factorized : ";
    cin>>num;
    pfsieve(num);
    return 0;
}