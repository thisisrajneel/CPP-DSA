#include<bits/stdc++.h>
using namespace std;

// NOT WORKING YET

int precedence(char c) {
    if(c=='^') {
        return 3;
    }
    else if(c=='*' || c=='/') {
        return 2;
    }
    else if(c=='+' || c=='-') {
        return 1;
    }
    else
        return -1;
}

string infix2postfix(string s) {
    
    stack<char> st;
    string res;
    
    for(int i=0; i<s.length();++i) {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
            res+=s[i];
        }
        else if (s[i]=='(') {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i]==')') {
            while(st.top()!='(') {
                res+=st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            while(!st.empty() && precedence(st.top())>precedence(s[i])) {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

        while(!st.empty()) {
            res+=st.top();
            st.pop();
        }
    }

    return res;
}

int main() {
    
    cout << infix2postfix("a-b/c");
    
    return 0;
}