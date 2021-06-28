#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,a[10];
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the elements :" << endl;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cout << "the array is : ";
    for(int i=0; i<n;++i)
        cout << a[i];
    return 0;
}