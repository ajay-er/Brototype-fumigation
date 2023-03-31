#include <stdio.h>

int main(void)
{
    int i,j,n=5,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(s=1;s<=n;s++)
        {
            printf("*");
        }
        printf("\n");
    }
}