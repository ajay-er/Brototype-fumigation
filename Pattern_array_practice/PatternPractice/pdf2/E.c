#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,s;
    for(i=1;i<=n;i++)
    {   
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}