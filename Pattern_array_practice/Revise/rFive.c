#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=8;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(s=i;s<=n;s++)
        {
            printf("* ");
        }
        printf("\n");
    } 
}