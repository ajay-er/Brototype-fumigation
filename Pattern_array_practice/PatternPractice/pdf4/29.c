#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(j=0;j<=n-i;j++)
        {
            printf("*\n");
        }
    }
}