#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum=0,i,num;
    printf("Enter any number \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d ",i);
    }
    for(i=1;i<=num;i++){
        sum=sum+i; 
    }printf(" \nsum=%d",sum);
}