#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,sum=0,num;
    printf("Enter the input: ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            printf("%d ",i);
            sum=sum+i;
        }
    }printf("\nsum:%d",sum);
}