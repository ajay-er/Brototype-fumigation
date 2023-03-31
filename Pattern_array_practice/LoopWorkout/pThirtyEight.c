#include <stdio.h>
#include <stdlib.h>

int main(void){
    int t,num,rem,rev=0;
    printf("Enter a number ");
    scanf("%d",&num);
    for(t=num;num!=0;num=num/10)
    {
        rem=num%10;
        rev=rev*10+rem;
    }
    if(t==rev)
    {
        printf("It is palindrome");
    }
    else 
    {
        printf("Not palindrome");
    }
}