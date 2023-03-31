#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,num,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d ",(i*i));
        sum=sum+(i*i);
    }printf("\nsum:%d",sum);
}