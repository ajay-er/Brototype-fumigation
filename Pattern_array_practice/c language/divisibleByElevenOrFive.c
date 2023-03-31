#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if((a%5==0) && (a%11==0)){
        printf("number is divisble");

    }else{printf("not divisible");}

}