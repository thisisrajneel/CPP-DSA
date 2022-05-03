#include<bits/stdc++.h>
using namespace std;

void name(int num, string nombre) {
    if(num == 0)
        return;

    cout<<nombre;
    name(--num, nombre);

}

int main() {

    int n;
    cin>>n;
    
    name(n, "Rajneel "); 
    
    return 0;
}