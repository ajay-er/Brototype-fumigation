#include <stdio.h>

int main(void)
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n+1;j++)
        {
            for(k=j;k<=n+1;k++)
            {
                printf("X ");
            }
            printf("\n");
        }
    }
}