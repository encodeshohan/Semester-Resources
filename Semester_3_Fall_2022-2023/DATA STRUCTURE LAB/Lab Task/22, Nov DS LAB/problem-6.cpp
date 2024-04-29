#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node * head = NULL;
void enQueue(int value){
    struct Node *n1;
    n1 = new Node();
    n1->data = value;
    n1->next = NULL;

    if(head == NULL){
        head = n1;
    }
    else{
        n1->next = head;
        head = n1;
    }
}
/*
void insertAtEnd(int value){
    struct Node *n1;
    n1 = new Node();
    n1->data = value;
    n1->next = NULL;

    if (head == NULL){
        head = n1;
    }
    else{
        struct Node * temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next=n1;
    }
}*/
void deQueue(){
    struct Node * temp = head;
    head = temp->next;
    delete(temp);
}

void printQueue(){
    struct Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<"..............."<<endl;
}

int main(){
    enQueue(10);
    enQueue(20);
    enQueue(30);
    printQueue();
    deQueue();
    printQueue();
return 0;
}
