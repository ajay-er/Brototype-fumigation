#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    int m=n*2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*\n");
        }
        m=m-2;
    }
}