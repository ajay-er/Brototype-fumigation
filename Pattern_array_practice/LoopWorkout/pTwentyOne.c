#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,k=9,num,sum=0;
    printf("Enter input :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d ",k);
       sum=sum+k;
       k=k*10+9;
    }printf("\nsum:%d",sum);
}