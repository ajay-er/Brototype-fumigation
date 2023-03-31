#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,num;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("\n%dx%d=%d",i,num,(i*num));
    }
}