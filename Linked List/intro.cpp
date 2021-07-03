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

void iterativeReverse(node* &head) {

    node* current = head;
    node* before = NULL;
    node* after;

    if(current == NULL) {
        cout<<"empty list";
    }

    while (current!=NULL)
    {
        after = current->next;
        current->next = before;

        before = current;
        current = after;
    }

    head = before;

}

node* recurReverse(node* &head) {
    
    if(head==NULL || head->next==NULL) {
        return head;
    }
    
    node* newhead = recurReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;

}

node* reverseKnodes(node* &head, int k) {
    node* prevptr = NULL;
    node* current = head;
    node* nextptr;
    int count = 0;

    while (current!=NULL && count<k)
    {
        nextptr = current->next;
        current->next = prevptr;
        prevptr = current;
        current = nextptr;

        count++;
    }
    if(nextptr!=NULL) {
        head->next = reverseKnodes(nextptr, k);
    }
    return prevptr;
}

bool detectCycle(node* &head) {
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow) {
            return true;
        }
    }

    return false;
}

void makeCycle(node* &head, int pos) {
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp->next!=NULL) {
        if(count == pos) {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }

    temp->next = startNode;
}

void removeCycle(node* &head) {
    node* slow = head;
    node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);
    
    fast = head;
    while(slow->next!=fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int length(node* head) {
    int l = 0;
    node* temp = head;
    while (temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node* appendLastK(node* head, int k) {
    int l = length(head);
    k = k%l; // if k>l
    int count = 1;
    
    node* tail = head;
    node* newhead;
    node* newtail;
    
    while(tail->next!=NULL) {
        if(count == (l-k)) {
            newtail = tail;
        }
        if(count == l-k+1) {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }

    newtail->next = NULL;
    tail->next = head;

    return newhead;
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
    iterativeReverse(head);
    display(head);
    head = recurReverse(head);
    display(head);
    insertAtHead(head, 0);
    insertAtTail(head, 1);
    insertAtHead(head, 2);
    insertAtTail(head, 3);
    display(head);
    head = reverseKnodes(head, 2);
    display(head);
    makeCycle(head, 2);
    cout << detectCycle(head);
    removeCycle(head);
    display(head);
    head = appendLastK(head, 3);
    display(head);
    return 0;
}