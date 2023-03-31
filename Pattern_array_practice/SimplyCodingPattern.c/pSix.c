#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,p,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            p=1;
            printf("  ");
        }
        for(j=1;j<i;j++)
        {
            printf("* ");
        }
        for(j=1;j<=i;j++)
        {
             printf("* ");
        }
        printf("\n");
    }
}