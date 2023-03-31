#include <stdio.h>

int main(void)
{
    int i,j,n=5,m;
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
}