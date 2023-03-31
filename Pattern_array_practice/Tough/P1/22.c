#include <stdio.h>

int main(void)
{
    int i,j,n=5,m=1;
    for(i=1;i<=n;i++)
    {   m=1;
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",m++);
        }
        m=m-2;
        for(j=1;j<i;j++)
        {
            printf("%d ",m--);
        }
        printf("\n");
    }
}