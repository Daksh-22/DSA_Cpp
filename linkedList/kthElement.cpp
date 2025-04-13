#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next = NULL;
    }
};

node* k_element(node* head,int k){
    node* fast = head;
    node* slow = head;

    int i = 0;
    while(i<=k){
        fast = fast->next;
        i++;
    }
    while(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{   // Creating nodes
    node a(1), b(2), c(3);

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    node *head, *tail;
    head = &a;
    tail = &c;

   node* kth = k_element(head,1);
    cout<<kth->data<<endl;
    return 0;
}