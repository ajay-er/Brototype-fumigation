#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,num,sum=0;
    printf("Enter your number of term: ");
    scanf("%d",&num);
    printf("odd numbers:");
    for(i=1;i<=num;i++){
        printf("%d ",2*i-1);
          sum=sum+(2*i-1);
    }printf("\n sum of odd :%d",sum);
}