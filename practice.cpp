#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    
    // 0 1 1 2 3 5 8 13

    int n = 10;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 3; i<=10 ; ++i) {
        int c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

    return 0;
}