#include<stdio.h>
# define max 5
int queue[max];
int front =-1;
int rear=-1;
void enqueue(int data){
    if(rear==max-1){
        printf("queue is full");

    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;
    }
    else{
        rear=rear+1;
        queue[rear]=data;
    }
}
int dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue underflow\n");
        return -1;
    }
    
    int value = queue[front];

    if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }

    return value;
}

void display(){
    if(rear==-1 && front==-1){
        printf("queue is empty");
    }
    else{
        for(int i =front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
}
void main(){
    enqueue(5);
    enqueue(10);
    dequeue();
    enqueue(99);
    display();
}