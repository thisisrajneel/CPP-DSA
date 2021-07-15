#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
       
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

node* merge(node* &head1, node* &head2) {
    node* head;
    node* current;

    if(head2->data<head1->data) {
        head = head2;
        current = head2;
        head2 = head2->next;
    }
    else {
        head = head1;
        current = head1;
        head1 = head1->next;
    }

    while(head1->next!=NULL && head2->next!=NULL) {
        if(head1->data<head2->data) {
            current->next = head1;
            current = current->next;
            head1 = head1->next;
        }
        else {
            current->next = head2;
            current = current->next;
            head2 = head2->next;
        }
    }

    if(head2->next == NULL) {
        head2->next = head1;
    }
    else {
        head1->next = head2;
    }

    return head;



}

void display(node* head) {
    while (head!=NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    
}

int main() {
    
    node* head1 = NULL;
    node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);

    insertAtTail(head2, 1);
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 7);
    insertAtTail(head2, 8);
    node* head = merge(head1, head2);

    display(head1);
    display(head2);
    display(head);

    return 0;
}