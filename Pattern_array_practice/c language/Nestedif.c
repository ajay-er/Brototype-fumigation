
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("num1 is greater:%d",a);
        }else{
            printf("num3 is greater:%d",c);
        }
    }else if (b>c){
        printf("num2 is greater :%d",b);}
        else{
            printf("num3 is greater:%d",c);
        }

}