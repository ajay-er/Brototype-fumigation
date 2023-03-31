#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,j,num,spc;
    printf("Enter a raw count");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(spc=1;spc<=(num-i);spc++){
            printf(" ");
        }for(j=1;j<=i;j++){
            printf("%d ",i);
        }printf("\n");
    }
}