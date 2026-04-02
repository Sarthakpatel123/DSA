#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int data;
}*front=NULL,*rear=NULL;
void enqueue(int data){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=newnode;
        
    }
    else{
        rear->next=newnode;
        rear=rear->next;
    }
}
void dequeue(){
    struct node *temp=front;
    if(front==NULL && rear==NULL){
        printf("queue is empty");

    }
    else if(front==rear){
        front=rear=NULL;
        free(temp);
    }
    else{
        front=front->next;
        free(temp);

    }
}
void display(){
    struct node *temp=front;
    if(front==NULL && rear==NULL){
        printf("queue is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void main(){
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();

}
