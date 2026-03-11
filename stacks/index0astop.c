#include<stdio.h>
#include<stdlib.h>
# define Max 5
int stack_arr[Max];
int first=-1;
void push(int data){
    if(first == Max-1){
    printf("Stack overflow");
    return;
}
    first =first +1;
    int i;
    for(i=first;i>0;i--){
        stack_arr[i]=stack_arr[i-1];
    }
    stack_arr[0]=data;
}
int pop(){
    if(first == -1){
    printf("Stack underflow");
    exit(1);
}
    int value;
    value=stack_arr[0];
    int i;
    for(i=0;i<first;i++){
        stack_arr[i]=stack_arr[i+1];
    }
    first=first-1;
    return value;
}
void print(){
    if(first==-1){
        printf("empty stack");
        exit(1);
    }
    int i;
    for(i=0;i<=first;i++){
        printf("%d ",stack_arr[i]);
    }
}
int main(){
    int data;
    push(30);
    push(40);
    push(50);
    push(60);
    data=pop();
    print();
}