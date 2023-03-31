#include <stdio.h>

int main(void)
{
    int i,j,n=5,p;
    for(i=1;i<=n;i++)
    {   p=i;
        // for(j=1;j<=n-i;j++)
        // {
        //     printf("  ");
        // }
        for(j=1;j<i;j++)
        {
            printf("%d ",p++);
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",p--);
        }
        printf("\n");
    }
}