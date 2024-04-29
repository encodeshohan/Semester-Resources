#include<bits/stdc++.h>
using namespace std;

#define s 6
int a[s];
int head = 0;
int tail = 0;
int count1 = 0;

bool isEmpty(){
    if(head == 0 && tail == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(tail == s -1){
            return true;
    }
    else{
        return false;
    }
}

void enQueue(int item){
    if(isFull()){
            cout<<"Queue is full"<<endl;
    }
    else{
        a[tail] = item;
        tail++;
        count1++;
    }
}

int deQueue(){
    if(isEmpty){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        int x = a[head];
        head++;
        count1--;
        return x;
    }
}

void printQueue(){
    if(isEmpty()){
        cout<<"Queue is Empty."<<endl;
    }
    else{
        for(int i = head; i<tail; i++){
            cout<<a[i]<< " ";
        }
    }
}

int main(){

    enQueue(5);
    enQueue(10);
    enQueue(15);
    enQueue(20);
    enQueue(25);
    enQueue(30);
    //deQueue();
    printQueue();


return 0;
}
