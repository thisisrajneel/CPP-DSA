#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    
    // 0 1 1 2 3 5 8 13

    int n;
    cout<<"enter number of terms :";
    cin>>n;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 3; i<=n ; ++i) {
        int c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

    return 0;
}