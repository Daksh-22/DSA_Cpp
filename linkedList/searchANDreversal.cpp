#include<iostream>
using namespace std;

class node{
    public: 
        int data;
        node* next;

        node(int d){
            data=d;
            next=NULL;
        }
};

void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}

int search (node* head, node* tail, int key){
    node* temp = head;
    int idx = 0;
    while(head!=NULL){
        if (temp->data == key){
            return idx;
        }
        temp = temp->next;
        idx++;
    } 
    return -1;
}

node* reversal(node* head){
    node* prev, *curr, *agla;

    curr = head;
    prev = NULL;

    while(curr!=NULL){
        agla = curr->next;
        curr->next = prev;

        prev = curr;
        curr = agla;
    }
    return prev;
}

int main() {
    // Creating nodes
    node a(1), b(2), c(3);

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    node *head, *tail;
    head = &a;
    tail = &c;

    cout << "Original Linked List:\n";
    printLL(head);

    head = reversal(head); 

    cout << "\nReversed Linked List:\n";
    printLL(head);

    return 0;
}