#include<stdio.h>
int main(){
    int pos,val,n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&pos);
    scanf("%d",&val);
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}