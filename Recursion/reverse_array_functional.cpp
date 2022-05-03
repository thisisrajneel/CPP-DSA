#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int l, int r) {
    if(l>=r) {
        return;
    }

    // int temp = a[l];
    // a[l] = a[r];
    // a[r] = temp;
    swap(a[l], a[r]);
    reverseArray(a, l+1, r-1);

}

int main() {
    
    int n, a[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    reverseArray(a, 0, n-1);
    for (int j = 0; j < n; j++)
    {
        cout<<a[j]<<' ';
    }
        
    
    return 0;
}