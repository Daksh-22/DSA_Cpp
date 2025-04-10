#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL\n";
}

int lengthLL(node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void insertAtFront(node* &head, node* &tail, int data) {
    node* n = new node(data);
    if (head == NULL) {
        head = tail = n;
    } else {
        n->next = head;
        head = n;
    }
}

void insertionAtEnd(node* &head, node* &tail, int data) {
    node* n = new node(data);
    if (head == NULL) {
        head = tail = n;
    } else {
        tail->next = n;
        tail = n;
    }
}

void insertAtPosition(node* &head, node* &tail, int pos, int data) {
    if (pos == 1) {
        insertAtFront(head, tail, data);
        return;
    }

    int len = lengthLL(head);
    if (pos >= len + 1) {
        insertionAtEnd(head, tail, data);
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1; ++i) {
        temp = temp->next;
    }

    node* n = new node(data);
    n->next = temp->next;
    temp->next = n;
}

int main() {
    node *head, *tail;
    head = tail = NULL;

    insertAtFront(head, tail, 1);   
    insertAtFront(head, tail, 2);   
    insertAtPosition(head, tail, 2, 3);

    printLL(head);

    return 0;
}
