#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,num,cube;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
       //cube=(i*i)*i;
        printf("\nNumber is :%d and cube of the %d is:%d",i,i,(i*i*i));
    }
}