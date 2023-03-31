#include <stdio.h>

int main(void)
{
    int i,j,p,k,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j==i || j==1 || i==n|| j==(n*2)-i+1 || j==n*2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j==1|| j==n*2|| j==n+i|| i+j==n+1)
            {
                printf("* ");
            }
            else
            printf("  ");
        }
        printf("\n");
    }
}