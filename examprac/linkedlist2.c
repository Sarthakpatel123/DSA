#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *insertbeg(struct node *head,int data){
    struct node * newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;

}
struct node *insertend(struct node *head,int data){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        return newnode;
    }
    struct node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        if(ptr==NULL){
            return head;
        }
    }
    ptr->next=newnode;
    newnode->next=NULL;
    return head;
}
struct node *insertpos(struct node *head,int data,int pos){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        printf("empty list");
        return newnode;
    }
    int i=1;
    struct node *ptr=head;
    for(i=1;i<pos-1&&ptr!=NULL;i++){
        ptr=ptr->next;
        if(ptr==NULL){
            printf("invalid choise");
            return head;
        }

    }
    newnode->next=ptr->next;
    ptr->next=newnode;
    return head;
    

}
struct node * delbeg(struct node *head){
    struct node *temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    return head;
}
struct node *delend(struct node *head ){
    struct node *temp1=head;
    struct node *temp2=head;
    if(head==NULL){
        printf("empty list");
        exit(1);
    }
    if(head->next==NULL){
        free(head);
        return NULL;

    }
    while(temp1->next!=NULL){
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=NULL;
    free(temp1);
    temp1=NULL;
    return head;
}
struct node * delpos(struct node *head,int pos){
    struct node *temp=head;
    if(head==NULL){
        printf("empty list");
        exit(1);
    }
    else if(pos==1){
        head=head->next;
        free(temp);
        return head;
    }
    struct node *ptr=head;
    int i =1;
    while(i<pos-1 &&ptr->next!=NULL){
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
struct node * reverse(struct node *head){
    struct node * temp1=NULL;
    struct node *temp2=NULL;
    while(head!=NULL){
        temp2=head->next;
        head->next=temp1;
        temp1=head;
        head=temp2;
    }
    head=temp1;
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
    struct node *head=NULL;
    int choice,data,pos;
    while(1){
        printf("1:insertbeg\n2:insertend\n3:insertpos\n4:delbeg\n5:delend\n6:delpos\n7:reverse\n8:display\n9:exit\n");
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
              printf("enter the data");
              scanf("%d",&data);
              head=insertbeg(head,data);
              break;
            case 2:
             printf("enter the data");
             scanf("%d",&data);
             head=insertend(head,data);
             break;
            case 3:
             printf("enter the data and pos");
             scanf("%d %d",&data,&pos);
             head=insertpos(head,data,pos);
             break;
            case 4:
             head=delbeg(head);
             break;
            case 5:
             head=delend(head);
             break;
            case 6:
              printf("enter the pos to delete");
              scanf("%d",&pos);
              head=delpos(head,pos);
              break;
            case 7:
              head=reverse(head);
              break;
            case 8:
              display(head);
              break;
            case 9:
              exit(0);
            default :
             printf("invalid choice");
        }

    }
}



