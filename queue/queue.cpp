#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;


//ARRAY IMPLEMENTATION OF QUEUE


class Queue{
    int arr[1000];
    int front=0;
    int rear=-1;

public:
///method

void enque(int x){
    rear++;
    arr[rear]=x;

}

void deque(){

    if(front<=rear){

        front++;
    }
    
}

int sz(){
    return rear - front+1;
}
int aage(){
    return arr[front];
}
int aakhiri(){
    return arr[rear];
}
bool isEmpty(){
    return front>rear;
}

};
int main(){
    Queue q;//create a queue
    q.enque(10);
    q.enque(90);
    q.enque(12);
    q.enque(18);

    q.deque();

    cout<<"size of queue:"<<q.sz()<<endl;
    
    cout<<"front of queue:"<<q.aage()<<endl;
    cout<<"rear of queue:"<<q.aakhiri()<<endl;


    ///to print all the queue

    while(!q.isEmpty()>0){
        cout<<q.aage()<<" ";
        q.deque();

    }
    return 0;

}