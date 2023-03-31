#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b,c;
    printf("Enter the size of A: ");
    scanf("%d",&a);
    printf("Enter the size of B: ");
    scanf("%d",&b);
    printf("Enter the size of C: ");
    scanf("%d",&c);

    if(a+b>c && a+c>b && b+c>a){
        printf("Trangle is valid");
    }else{printf("Traingle is not valid");}
}