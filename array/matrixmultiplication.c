#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3]={0};
    int d[3][3];
    int res[3][3]={0};
    printf("enter value of a");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }


    }
      printf("enter value of b");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        

    }
      printf("enter value of d");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            scanf("%d",&d[i][j]);
        }
        

    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                c[i][j]+=b[i][k]*d[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=2*a[i][j]+3*c[i][j];
        }
    }
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",res[i][j]);
        }
    }
}