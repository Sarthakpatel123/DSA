#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ispalindrom=1;
    for(i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            ispalindrom=0;
            break;}
        
    }
    if(ispalindrom){
        printf("it is palindrome");

    }
    else{
        printf("it is not");
    }
}