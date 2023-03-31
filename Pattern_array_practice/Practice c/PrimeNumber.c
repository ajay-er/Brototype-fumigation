#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num,i;
    int flag=0;
    printf("enter a number");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++){
       if( num%i==0){
        flag=1;
        break;
       }          

    }
    
    if(flag==0){
        printf("prime number");
    }else{
        printf("not prime");
        }
}