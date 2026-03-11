#include<stdio.h>
#include<stdlib.h>
#define max 5
int  stack_arr[max];
int top=-1;
void push(int data){
    if(top==max-1){
        printf("stack overflow");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}
void primefact(int num){
    if(top==max-1){
        printf("stack overflow");
        return;
    }
    int i=2;
    while(num!=1){
        while(num%i==0){
            push(i);
            num=num/i;


        }
        i++;
    }
}
void print(){
    if(top==-1){
        printf("stack underflow");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d ",stack_arr[i]);

    }
}
int main(){
    primefact(450);
    print();
}