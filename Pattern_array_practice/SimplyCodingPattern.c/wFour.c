#include <stdio.h>
#include <stdlib.h>

int main(void){
    int s,i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
            for(s=2;s<=i;s++)
            {
                printf(" ");
            } 
            for(j=i;j<=n;j++)
            {
                printf("* ");
            }
            printf("\n");
    }
}