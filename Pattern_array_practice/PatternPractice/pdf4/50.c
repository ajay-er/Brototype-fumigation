#include <stdio.h>

int main(void)
{
    int  i,j,n=4,s=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf("X ");
        }
        printf("--\n-");
         for(j=1;j<=s;j++)
        {
            printf("X ");
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("X\n");
        }
        s--;

    }
}