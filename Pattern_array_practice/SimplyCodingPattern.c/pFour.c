#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}