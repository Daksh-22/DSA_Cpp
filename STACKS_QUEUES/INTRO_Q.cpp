#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data = d;
            next = NULL;
        }
};

class queue{
   node* head;
   node* tail;

   public:
   queue(){
         head = tail = NULL;
}
    void push(int d){
        if (!head){
            head = tail = new node(d);
        }
        else{
            node* n = new node(d);
            tail->next = n;
            tail = n;
        }

    }
    void pop(){
        if (head=tail=NULL){
            return;
        }
    
        else if(!head->next){
            delete head;
        }
        else{
            node* temp = head;
            head = head->next;
            delete head;
        }
    }
    int front(){
            return head->data;
    }
    bool empty(){
        head = tail = NULL;
    }
};
int main()
{
    
    return 0;
}