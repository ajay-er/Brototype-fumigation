#include <stdio.h>

int main(void)
{
    int i,j,n=3,m=3,p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            for(p=1;p<=j;p++)
            {
                printf("X ");
            }
            printf("\n");
        }
        m++;
    }
}