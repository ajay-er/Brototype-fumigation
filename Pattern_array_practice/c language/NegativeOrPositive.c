#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("number 1 is greater:%d",a);

    }else{
        printf("number 2 is greater:%d",b);
    }
}