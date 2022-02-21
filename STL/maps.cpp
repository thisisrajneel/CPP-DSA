#include<bits/stdc++.h>
using namespace std;

int main() {
    
    map<string, int> m;

    m["jordan"] = 23;
    m["bryant"] = 24;
    m["kobe"] = 8;

    for(pair<string, int> x:m) {
        cout<<x.first<<" "<<x.second<<endl;
    }

    m["kobe"]++;

    for(pair<string, int> x:m) {
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}