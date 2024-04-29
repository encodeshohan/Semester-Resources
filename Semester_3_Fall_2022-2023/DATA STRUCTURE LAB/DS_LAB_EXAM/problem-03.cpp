#include<bits/stdc++.h>
using namespace std;

template<typename T>


class Queue{
private:
int s;
T *a;
int head;
int tail;
int count1;

public:
    Queue(){
        s = 10;
        a = new T[s];
        head = 0;
        tail = 0;
        count1 = 0;
    }
    Queue(int s){
        this-> s = s;
        s = 10;
        a = new T[s];
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

void enQueue(T item){
    if(isFull()){
            cout<<"Queue is full"<<endl;
    }
    else{
        a[tail] = item;
        tail++;
        count1++;
    }
}

T deQueue(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        T x = a[head];
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

    Queue <string> q(5);
    q.enQueue("Shohan");
    q.enQueue("Abir");
    q.enQueue("rafi");
    q.enQueue("rakib");
    q.enQueue("rakib");
    q.printQueue();

return 0;
}



