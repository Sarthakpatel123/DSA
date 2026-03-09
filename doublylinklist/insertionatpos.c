#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node *prev;
};
struct node*insertpos(struct node *head,int data,int pos){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    struct node * ptr=head;
    int i;
    for(i=0;i<pos-1&&ptr!=NULL;i++){
        ptr=ptr->next;

    }
    newnode->next=ptr->next;
    newnode->prev=ptr;
    ptr->next=newnode;
    return head;

}
void display(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}
int main(){
    struct node * head=malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    head->prev=NULL;
    struct node* current=malloc(sizeof(struct node));
    current->data=20;
    current->next=NULL;
    current->prev=NULL;
    head->next=current;
    current=malloc(sizeof(struct node));
    current->data=30;
    current->next=NULL;
    current->prev=NULL;
    head->next->next=current;
    head=insertpos(head,30,2);
    display(head);
}