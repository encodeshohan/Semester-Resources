#include<bits/stdc++.h>
using namespace std;
#define n 5
int a[n];
int top = -1;

bool isFull(){
    if(top == n-1){
        return true;
    }
    return false;
}

bool isEmpty(){
    if(top<0){
        return true;
    }
    return false;
}

int pop (){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        int value = a[top];
        top--;
        return value;
    }

}

void push(int data){

    if(isFull()){
        cout<<"Stack Over flow"<<endl;
    }

    else{
        top++;
        a[top] = data;
    }
}

void print(){
for(int i = top; i>=0; i--){
    cout<<a[i]<<endl;
    }

}

int main(){
    push(10);
    push(20);
    //push(30);
    //print();

    //cout<<endl;

    //int result = pop();
    //cout<<result<<endl;
    //cout<<endl;
    pop();
    pop();
    pop();

return 0;}
