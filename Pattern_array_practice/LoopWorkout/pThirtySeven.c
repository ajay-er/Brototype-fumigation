#include <stdio.h>
#include <stdlib.h> 
 
int main(void){
    int num,sum=0,t,k;
    printf("Enter your number ");
    scanf("%d",&num);
    for(t=num;num!=0;num=num/10)
    {
        k=num%10;
        sum=sum*10+k;
    }
    printf("Reverse order is:%d",sum);
}