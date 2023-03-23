#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j<=i || i+j>n*2 )
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
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j<=i || i+j>n*2 )
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
}