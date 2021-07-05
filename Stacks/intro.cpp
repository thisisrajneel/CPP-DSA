#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define n 100

class stack {
    public:
    int* arr;
    int top;

    stack() {
        arr = new int[n];
        top = -1;
    }

    void push(int val) {
        
        if(top == n-1) {
            cout << "stack overflow";
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop() {
        if(top == -1) {
            cout << "stack empty";
            return;
        }
        top--;
    }

    int Top() {
        if(top == -1) {
            cout << "stack empty";
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
}s;

int main() {
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.Top();
    cout<<s.empty();
    s.pop();
    cout<<s.Top();
    return 0;
}