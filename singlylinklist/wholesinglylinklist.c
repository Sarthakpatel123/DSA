#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;

};
struct node *insertbeg(struct node *head,int data){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;

}
void insertend(struct node * head,int data){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    struct node * ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
}
void insertpos(struct node *head,int data,int pos){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    int i;
    struct node *ptr=head;
    for(i=1;i<pos-1 &&ptr!=NULL;i++){
        ptr=ptr->next;
        if(ptr==NULL){
            printf("position is invalid");
            return;
        }

    }
    newnode->next=ptr->next;
    ptr->next=newnode;

}
struct node * delbeg(struct node*head){
    struct node *temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    return head;
}
struct node *delend(struct node *head){
    struct node *temp=head;
    struct node *temp2=head;
    if(head==NULL){
        printf("empty linked list");
        return head;
    }
     else if(head->next==NULL){
        head=head->next;
        free(temp);
        return head;
    }
    else{
      while(temp->next!=NULL){
        temp2=temp;
        temp=temp->next;

    }
    temp2->next=NULL;
    free(temp);
    temp=NULL;
    return head;
}

}
struct node * delpos(struct node*head,int pos){
    struct node *temp=head;
    if(head==NULL){
        printf("empty linked list");
        return head;
    }
    else if(pos==1){
        head=head->next;
        free (temp);
        return head;
    }
    else{
        struct node * ptr=head;
        int i=1;
        while(ptr!=NULL&&i<pos)
        {
            temp=ptr;
            ptr=ptr->next;
            if(ptr==NULL){
                printf("invalid pos");
                return head;
            }
            i++;
        }
        temp->next=ptr->next;
        free(ptr);
        ptr=NULL;
        return head;
        

    }
}
struct node *reverse(struct node *head){
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
void display(struct node *head){
    struct node *ptr=head;
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
    head=insertbeg(head,10);
    insertend(head,60);
    insertpos(head,99,2);
    head=delbeg(head);
    head=delend(head);
    head=delpos(head,3);
    head=reverse(head);

   
    display(head);

}