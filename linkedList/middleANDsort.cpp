#include <iostream>
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

// Function to print the linked list
void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Function to find the middle of the linked list
node* midLL(node* head) {
    if (head == NULL || head->next == NULL) return head;

    node* slow = head;
    node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow; // This is the node before the middle (if even length)
}

// Function to merge two sorted linked lists
node* mergeLL(node* a, node* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;

    node* nH;

    if (a->data < b->data) {
        nH = a;
        nH->next = mergeLL(a->next, b);
    } else {
        nH = b;
        nH->next = mergeLL(a, b->next);
    }

    return nH;
}

// Function to perform merge sort on a linked list
node* mergeSort(node* head) {
    // Base case
    if (head == NULL || head->next == NULL) return head;

    // Divide
    node* m = midLL(head);
    node* a = head;
    node* b = m->next;
    m->next = NULL;

    // Sort
    a = mergeSort(a);
    b = mergeSort(b);

    // Merge
    node* nH = mergeLL(a, b);

    return nH;
}

int main() {
    // Create sample unsorted linked list: 4 → 2 → 1 → 3
    node* a = new node(4);
    node* b = new node(2);
    node* c = new node(1);
    node* d = new node(3);

    a->next = b;
    b->next = c;
    c->next = d;

    node* head = a;

    cout << "Original Linked List:\n";
    printLL(head);

    // Sort the linked list using merge sort
    head = mergeSort(head);

    cout << "Sorted Linked List:\n";
    printLL(head);

    return 0;
}
