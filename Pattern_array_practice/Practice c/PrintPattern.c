#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,num=8;
    
    
    for(i=1;i<=num;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }printf("\n");
    }
}