#include <stdio.h>
#include <stdlib.h>

int main(void){
    int j,num,spc,raw;
    printf("Enter raw count :");
    scanf("%d",&num);
    for(raw=1;raw<=num;raw++){
        for(spc=-5;spc<=(num-raw);spc++){
            printf(" ");
        }for(j=1;j<=(2*raw-1);j++){
            printf("*");
        }printf("\n");
    }for(raw=num-1;raw>=1;raw--){
        for(spc=-5;spc<=(num-raw);spc++){
            printf(" ");
        }for(j=1;j<=(2*raw-1);j++){
            printf("*");
        }printf("\n");
    }

}