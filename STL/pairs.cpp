#include<bits/stdc++.h>
using namespace std;

int main() {

    pair<int, string> p;
    cin>>p.first>>p.second;

    cout<<p.first<<" "<<p.second;

    pair<int, int> a[5] = {{3,2},{3,0},{1,0},{1,6},{0,6}};
    sort(a,a+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    
    return 0;
}
