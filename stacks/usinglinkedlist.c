#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*top=NULL;
void push(int data){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->next=top;
    top=newnode;

}
int pop(){
    struct node * temp=top;
    if(top==NULL){
        printf("stack is empty");
        return 0;
    }
    top=top->next;
    free(temp);
    return 1;
}
void display(){
    struct node * ptr=top;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    push(50);
    push(60);
    push(70);
    int val= pop();
    display();

}
