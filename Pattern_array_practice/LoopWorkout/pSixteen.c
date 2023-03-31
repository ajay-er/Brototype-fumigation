#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,sum=0,num;
    printf("Enter a input ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d ",2*i);
        sum=sum+2*i;
    }printf("\n sum of even numbers:%d",sum);

}