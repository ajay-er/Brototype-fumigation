#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n=9;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    } 
}