#include <stdio.h>

int main(void)
{
    int i,j,n=4,m=1;
    for(i=1;i<=n;i++)
    {   m=m+m;
        for(j=1;j<=m;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(j=1;j<=2*i-1;j++)
        {
            printf("*\n");
        }
    }
}