#include<stdio.h>
int main(){
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int secl=arr[0];
    int largest=arr[0];
    for(i=0;i<n;i++){
       
          if(arr[i]>largest){
            secl=largest;
            largest =arr[i];
          }
          else if(arr[i]>secl && arr[i]!=largest){
            secl=arr[i];
          }
          
        
    }
    printf("second largest %d",secl);

}