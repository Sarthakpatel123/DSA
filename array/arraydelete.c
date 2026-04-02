#include<stdio.h>
int main(){
    int n,pos;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the pos to remove");
    scanf("%d",&pos);
    if(pos<1 || pos>n){
        printf("invalid pos");
    }
    else{
       for(int i=pos-1;i<n;i++){
           arr[i]=arr[i+1];
    }
    n--;
    for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);

}
}}