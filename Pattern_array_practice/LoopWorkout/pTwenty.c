#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,spc,num;
    printf("Enter a raw count");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(spc=-2;spc<=(num-i-2);spc++){
            printf(" ");
            }for(j=1;j<=(2*i-1);j++){
                printf("*");
            }
        printf("\n");
    }

}