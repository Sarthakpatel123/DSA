#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node * deleteend(struct node * head){
    if(head==NULL){
        printf("list is empty");
        return NULL;
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;

    }
    else{
        struct node * temp=head;
        struct node * temp2=head;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=NULL;
        free(temp);
        temp=NULL;

    }return head;
    
}
