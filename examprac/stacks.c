#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack_arr[max];
int top=-1;
void push(int data){
    if(top==max-1){
        printf("overflow");
        return ;

    }
    top=top+1;
    stack_arr[top]=data;
}
int pop(){
    if(top==-1){
        printf("stack underflow");
        exit(1);
    }
    int value=stack_arr[top];
    top--;
    return value;
}
int peek(){
    if(top==-1){
        printf("underflow");
        return -1;

    }
    return stack_arr[top];
}
void print(){
    if(top==-1){
        printf("stack is empty");
        return;
    }

    for(int i=top;i>=0;i--){
        printf("%d\n",stack_arr[i]);
    }


}
int main(){
    int val;
    int choice,data;
    while(1){
        printf("1:push\n2:pop\n3:peek\n4:display\n5:exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
             printf("enter the data");
             scanf("%d",&data);
             push(data);
             break;
            case 2:
             val=pop();
             printf("%d",val);
             break;
            case 3:
              val=peek();
              printf("%d",val);
              break;
            case 4:
             print();
             break;
            case 5:
             exit(0);

            default :
             printf("invalid choice");

             
             
        }
    }
}