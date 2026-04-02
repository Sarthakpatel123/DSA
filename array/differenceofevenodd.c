#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int odd=0;
    int even=0;
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            even=even+arr[i];
        }
        else{
            odd=odd+arr[i];
        }
    }
    int diff=odd-even;
    printf("diff is%d",diff);
}