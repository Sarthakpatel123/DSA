#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
void push(int data){
    if(top==max-1){
        printf("stack overflow");
        return;
    }
    else{
        top=top+1;
        stack[top]=data;
    }
}
int pop(){
    
    if(top==-1){
        printf("stack underflow");
        return top;
    }
    
    else{
        int value=stack[top];
        top=top-1;
        return value;

    }
}
int peek(){
    if(top==-1){
        printf("stack underflow");
        return top;
    }
    else{
        return stack[top];
    }
    
}
void display(){
    if(top==-1){
        printf("stack underflow");
        return;
    }
    for(int i=0;i<=top;i++){
        printf("%d",stack[i]);
    }
    
}
int main(){
    int head;
    push(20);
    push(30);
    head=pop();
    display();
}