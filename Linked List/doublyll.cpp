#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    node* prev;
    int data;
    node* next;

    node (int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);

    n->next = head;
    if(head!=NULL) {
        head->prev = n;
    }
    
    head = n;
}

void insertAtTail(node* &head, int val) {
    
    if(head == NULL) {
        insertAtHead(head, val);
        return; 
    }
    
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL) {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node* &head) {
    
    node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

void removeNode(node* &head, int pos) {
    
    if(pos == 1) {
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count = 1; // NOT 0 BASE INDEXING

    while (temp!=NULL && count<pos)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    temp->prev->next = temp->next;
    delete temp;
    
}

void display(node* head) {
    node* temp = head;
    while(temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    node* head = NULL;
    insertAtTail(head, 4);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    display(head);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    removeNode(head, 2);
    display(head);
    return 0;
}