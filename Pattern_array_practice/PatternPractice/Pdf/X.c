#include <stdio.h>

int main(void)
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=n*2-(2*i-1);j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}