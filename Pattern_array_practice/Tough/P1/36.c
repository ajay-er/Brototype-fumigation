#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("* ");
        }printf("\n");
        for(j=1;j<=2*i;j++)
        {
            printf("*- ");
        }

        printf("\n");
    }
}