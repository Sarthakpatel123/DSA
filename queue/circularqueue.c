#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int data){
    if(rear==-1&& front==-1){
        front=rear=0;
        queue[rear]=data;
    }
    else if((rear+1)%max==front){
        printf("full");
    }
    else{
        rear=(rear+1)%max;
        queue[rear]=data;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        
        front=(front+1)%max;
    }

}
void display(){
    
    if(front == -1 && rear == -1){
        printf("empty\n");
    }
    else{
        int i = front;

        while(1){
            printf("%d ", queue[i]);   // ✅ FIXED
            
            if(i == rear)
                break;

            i = (i + 1) % max;
        }
        printf("\n");
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    dequeue();
    display();
    return 0;

    

}