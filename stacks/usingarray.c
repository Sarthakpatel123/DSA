#include<stdio.h>
#include<stdlib.h>
#define max 4
int stack_arr[max];
int top=-1;
void push(int data){
    if (top==max-1){
        printf("stack is full");
        return ;
    }
    top=top+1;
    stack_arr[top]=data;
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
int pop(){
    if(top==-1){
        printf("stack is empty");
        exit(1);
    }
    int value;
    value=stack_arr[top];
    top=top-1;
    return value;
}
int peek(){
    if(top==-1){
        printf("its empty");
        exit(1);
    }
    return stack_arr[top];
}

int main(){
    int choice,data;
    while(1){
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. print the top most element\n");
        printf("4. print the whole stack\n");
        printf("5. quit\n");
        printf("enter your choice");
        scanf("%d",&choice);
    
       switch(choice){
        case 1:
          printf("enter the element to be pushed:");
          scanf("%d",&data);
          push(data);
          break;
        case 2:
           data=pop();
           printf("the deleted element is %d",data);
           break;
        case 3:
           printf("%d",peek());
           break;
        case 4:
           print();
           break;
        case 5:
           exit(1);
        default:
           printf("wrong choice");
           
           
    }}
    return 0;

}