#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;

};
struct node *insertbeg(struct node * head,int data){
   struct node *newnode=malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next=head;
   head=newnode;
}
struct node * insertatpos(struct node * head,int data,int pos){
    struct node * newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(pos==1){
        newnode->next=head;
        head =newnode;
    }
    int i;
    struct node * ptr=head;
    for(i =1;i<pos-1 && ptr!=NULL;i++){
        ptr=ptr->next;
        if(ptr=NULL){
            printf("invalid pos");
        }
    }newnode->next=ptr->next;
    ptr->next=newnode;
}
struct node *insertend(struct node *head,int data){
 struct node * newnode=malloc(sizeof(struct node));
 newnode->data=data;
 newnode->next=NULL;
 struct node * ptr=head;
 while(ptr->next!=NULL){
    ptr=ptr->next;
 }
 ptr->next=newnode;
}
void display(struct node *head){
 struct node *ptr=head;
 while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->next;
 }
}
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=100;
    head->next=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=65;
    current->next=NULL;
    current=malloc(sizeof(struct node));
    current->data=99;
    current->next=NULL;
    head=insertbeg(head,12);
    insertatpos(head,45,2);
    insertend(head,100);
    display(head);
}