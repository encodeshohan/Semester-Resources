#include<bits/stdc++.h>
using namespace std;


class Queue{
private:
int s;
int *a;
int head;
int tail;
int count1;

public:
    Queue(){
        s = 10;
        a = new int[s];
        head = 0;
        tail = 0;
        count1 = 0;
    }
    Queue(int s){
        this-> s = s;
        s = 10;
        a = new int[s];
        head = 0;
        tail = 0;
        count1 = 0;
    }

    bool isEmpty(){
    if(head == 0 && tail == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(tail == s - 1){
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
    if(isEmpty()){
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

};

int main(){

    Queue q(5);
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.printQueue();

return 0;
}

