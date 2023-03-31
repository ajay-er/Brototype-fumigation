#include <stdio.h>

int main(void)
{
    int i,j,n=4,s=1;
    for(i=1;i<=n;i++)
    {   s=s+s;
        for(j=1;j<=s;j++)
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