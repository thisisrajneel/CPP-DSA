#include<bits/stdc++.h>
using namespace std;

int main() {
    
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(1);

    s.erase(2);
    for(int x:s) {
        cout<<x<<" ";
    }
    
    
    return 0;
}