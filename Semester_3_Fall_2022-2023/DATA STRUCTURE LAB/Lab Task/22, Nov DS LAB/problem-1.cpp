#include<bits/stdc++.h>
using namespace std;

struct Node {                             //STRUCTURE LINKED LIST
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtBegining(Node *head, int value){
    struct Node *n1;
    n1 = new Node();
    n1->data = value;
    n1->next = NULL;

    if (head == NULL){
        head = n1;
    }
    else{
        n1->next = head;
        head = n1;
    }

}

void deleteFromBegining(){

}

void traversal(){
    struct Node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"............................."<<endl;
}

int main(){
    insertAtBegining(10);
    insertAtBegining(20);
    insertAtBegining(30);
    insertAtBegining(40);
    traversal();
return 0;}

