#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j==n+1-i || j==n+i-1)
            {
                printf("%d ",i);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
}