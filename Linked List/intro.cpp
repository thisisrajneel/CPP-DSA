#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node *next;

    node(int val) {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node *head, int val) {
       
    node *n = new node(val);

    if(head == NULL) {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next!=NULL)
    {
        temp = temp->next; 
    }
    
    temp->next = n;
}

void insertAtHead(node* &head, int val) {
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}

void display(node* head) {
    while (head!=NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    
}

bool search(node* head, int key) {
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }

    return false;
}

void deletion(node* &head, int val) {
    
    if(head == NULL) {
        return;
    }
    if(head->next==NULL) {
        node* todelete = head;
        head = head->next;

        delete todelete;
        return;
    }
    node* temp = head;

    while (temp->next->data!=val)
    {
        temp = temp->next;
    }
    
    node* todelete = temp->next;
    temp->next = temp->next->next;
    
    delete todelete;    
}

void deleteAtHead(node* &head) {
    node* todelete = head;
    head = head->next;

    delete todelete;
}

int main() {

    node *head = NULL;
    insertAtHead(head, 2);
    insertAtTail(head, 12);
    insertAtHead(head, 4);
    insertAtTail(head, 67);
    display(head);
    cout<<search(head, 4);
    deletion(head, 12);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}