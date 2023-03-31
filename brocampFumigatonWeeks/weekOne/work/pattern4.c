#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=1;
    for(i=1;i<=n;i++)
    {   p=1;
        for(j=i;j<=n;j++)
        {
            printf("%d ",p++);
        }p=p-1;
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(j=2;j<i;j++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",p--);
        }
        printf("\n");
    }
}