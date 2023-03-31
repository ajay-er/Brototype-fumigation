#include <stdio.h>

int main(void)
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+2;j++)
        {
            if(j==1|| i==1|| j==n-i+1)
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