#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,num,sum=1;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum*(i);
    }printf("%d",sum);
}