#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k=0,p;
    for(i=1;i<=n;i++)
    {   p=1;
        for(s=i;s<n;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",k--);
        }
        k=i;
        for(j=1;j<i;j++)
        {
            printf("%d ",p++);
        }

        printf("\n");
    }
}