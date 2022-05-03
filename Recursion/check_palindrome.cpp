#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int l, int r) {
    if(l>=r) {
        return true;
    }
    if(s[l]!=s[r]) {
        return false;
    }

    return checkPalindrome(s, l+1, r-1);
}

int main() {
    
    char s[100];
    cin.getline(s, 100);
    cout<<checkPalindrome(s, 0, strlen(s)-1);

    return 0;
}