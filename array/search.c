#include<stdio.h>
int main(){
    int val;
    int n;
    printf("enter the valiue of n");
   
    scanf("%d",&n);
     int arr[n];
    printf("enter the values");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the val");
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            printf("element found at %d",i);
        }
}
}