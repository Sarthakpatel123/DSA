#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node  *insertatbeg(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    head=temp;
    
}
struct node *insertatend(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void display(struct node *head){
    struct node*ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

}
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=99;
    head->next=NULL;
    struct node* current=malloc(sizeof(struct node));
    current->data=100;
    current->next=NULL;
    head->next=current;
    head=insertatbeg(head,5);
    insertatend(head,80);
    display(head);}