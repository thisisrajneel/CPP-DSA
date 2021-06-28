#include <iostream>

using namespace std;

int main()
{
    int a[5];
    for(int i=0;i<5;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;++i){
        cout << "element at index " << i << " is : " << a[i] << endl;
    }
    
}