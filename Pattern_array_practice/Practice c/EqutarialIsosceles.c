#include <stdio.h>
#include <stdlib.h>

int main(void){
    int s1,s2,s3;
    printf ("Enter the first side ");
    scanf("%d",&s1);
    printf ("Enter the second side ");
    scanf("%d",&s2);
    printf ("Enter the third side ");
    scanf("%d",&s3);
    if(s1==s2 && s2==s3){
        printf("Equtarial traingle");
    }else if (s1==s2 || s1==s3 || s2==s3){
        printf("isosceles traingle");
    }else {
        printf("scalene traingle");
    }

}