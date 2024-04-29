#include<bits/stdc++.h>
using namespace std;

    struct Node{
    struct Node *Left;
    int data;
    struct Node *Right;
    };

    void inorder (struct Node *root){
        if(root!=NULL){
            inorder(root->Left);
            cout<< root->data <<"->";
            inorder(root->Right);
        }
    }

    struct Node *newNode(int val){
        Node *temp = new Node();
        temp->data = val;
        temp->Right =NULL;
        temp->Left =NULL;
        return temp;
    };

    struct Node *Insert(Node *root, int val){
        if(root == NULL){
            root = newNode(val);
        }
        else if(val < root->data){
            root->Left = Insert(root->Left, val);
        }
        else{
            root->Right = Insert(root->Right, val);
        }
        return root;
    };

int main(){
    struct Node *root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 5);
    root = Insert(root, 20);

    inorder(root);
return 0; }

