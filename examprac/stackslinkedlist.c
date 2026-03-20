#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *next;
    int data;
}*top=NULL;
struct node * push(int data){
    struct node * newnode=malloc(sizeof(struct node ));
      if(newnode == NULL){
        printf("Heap Overflow\n");
        return top;
    }

    newnode->data=data;
    newnode->next=NULL;
    newnode->next=top;
    top=newnode;
return top;

}
int  pop(){
    struct node *temp=top;
    if(top==NULL){
        printf("underflow");
        return -1;
    }
    int val=temp->data;
    top=top->next;
    free(temp);
    return val;


}
void print(){
    if(top==NULL){
        printf("underflow");
        return ;
    }
    struct node *ptr=top;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    
}
int main(){
    int val;
    push(30);
    push(50);
    val= pop();
    print();
}