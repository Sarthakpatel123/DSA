#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*deletebeg(struct node * head){
    struct node * temp=head;
    if(head==NULL){
        printf("list is empty");
        return NULL;
    }
    head=head->next;
    free(temp);
    temp=NULL;
    return head;

}
