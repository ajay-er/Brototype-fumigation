#include <stdio.h>
#include <stdlib.h>

int main(void){
    int ang1,ang2,ang3;
    int sum;
    printf("Enter first angle ");
    scanf("%d",&ang1);
    printf("Enter second angle ");
    scanf("%d",&ang2);
    printf("Enter third angle ");
    scanf("%d",&ang3);
    sum=ang1+ang2+ang3;
    if(sum==180 && ang1>0&&ang2>0&&ang3>0){
        printf("it is trangle");
    }else{printf("it is not trangle");}

}