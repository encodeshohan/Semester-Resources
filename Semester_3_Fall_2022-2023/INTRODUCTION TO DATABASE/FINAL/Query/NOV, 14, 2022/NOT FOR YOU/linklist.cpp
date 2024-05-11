#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
};

void insertbegin(Node **head,int value){
    Node *newNode = new Node();
    newNode->data =value;
    newNode->next=*head;
    *head=newNode;
}

void insertend(Node **head,int value){
   Node *newNode = new Node();
   if(*head==NULL){
     *head=newNode;
     (*head)->data=value;
     (*head)->next=NULL;
     return;
   }

   Node *check=*head;
   while(check->next!=NULL){
      check=check->next;
   }
   check->next=newNode;
   newNode->next=NULL;
   newNode->data=value;

}


void printall(Node *head){
while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<"NULL"<<endl;
}






int main(){
Node *head=NULL;
insertend(&head,1);
insertend(&head,2);
insertend(&head,3);
printall(head);

return 0;
}

