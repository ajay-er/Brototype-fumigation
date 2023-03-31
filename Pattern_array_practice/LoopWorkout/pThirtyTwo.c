#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num,i,flag=0;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            printf("not prime");
            flag=1;
            break;
     }
        
     }if(flag==0){
        printf(" prime");
    }}
