#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *insertbeg(struct node *head,int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    head=temp;
}
struct node * insertatpos(struct node*head,int data,int pos){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(pos==1){
        newnode->next=head;
        head=newnode;
    }
    int i;
    struct node* ptr=head;
    for(i=0;i<pos-1 && ptr!=NULL;i++){
        ptr=ptr->next;
        if(ptr==NULL){
            printf("invalid pos");
        }
        
    }newnode->next=ptr->next;
        ptr->next=newnode;
}
struct node *insertend(struct node* head,int data){
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
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=90;
    head->next=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=99;
    current->next=NULL;
    head->next=current;
    head=insertbeg(head,9);
    insertatpos(head,65,2);
    insertend(head,100);
    display(head);

    
}