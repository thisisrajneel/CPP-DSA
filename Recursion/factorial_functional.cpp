#include<bits/stdc++.h>
using namespace std;
/*
    functional recursion means returning in the call statement itself.
*/
int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    
    int n;
    cin>>n;

    cout<<factorial(n);
    
    return 0;
}