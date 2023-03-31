#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,num;
    float sum=0.0;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i<num){printf("1/%d + ",i);
        sum=sum+1/(float)i;}
        if(i==num){
            printf("1/%d ",i);
        sum=sum+1/(float)i;}
        }
    printf("\nsum: %f",sum);
  }
