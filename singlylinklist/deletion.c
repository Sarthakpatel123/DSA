#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * delfrombeg(struct node *head){
    struct node *temp=head;
    if(head==NULL){
        printf("the list is already empty");
        return NULL;
    }
    head=head->next;
    free(temp);
    temp=NULL;
    return head;
}
void display(struct node *head){
    struct node * ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
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
    head=delfrombeg(head);
    display(head);
}