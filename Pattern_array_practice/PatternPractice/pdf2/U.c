#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,s,p=1;
    for(i=1;i<=n;i++)
    {   k=65;
        p=1;
        for(s=i;s<n;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",k++);
        }
        for(s=1;s<=i;s++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }
}