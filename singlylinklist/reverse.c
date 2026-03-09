#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node *rev(struct node * head){
    struct node *prev=NULL;
    struct node *nex=NULL;
    while(head!=NULL){
        nex=head->next;
        head->next=prev;
        prev=head;
        head=nex;

    }
    head=prev;
    return head;
}
void display(struct node * head){
    struct node * ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
}
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=20;
    head->next=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=30;
    current->next=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=40;
    current->next=NULL;
    head->next->next=current;
    current=malloc(sizeof(struct node));
    current->data=50;
    current->next=NULL;
    head->next->next->next=current;
    head=rev(head);
    display(head);


}