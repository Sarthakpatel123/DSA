#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *insertatempty(struct node *head,int data){
    struct node * newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    return head;
}
void insertend(struct  node *head,int data){
    struct node * newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    struct node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    newnode->next=NULL;
    newnode->prev=ptr;
    ptr->next=newnode;
}
void display(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;

    }
}
int main(){
    struct node *head=NULL;
    head=insertatempty(head,99);
    insertend(head,12);
    insertend(head,90);
    insertend(head,69);
    display(head);
    


}