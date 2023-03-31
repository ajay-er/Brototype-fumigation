#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n=4,p;
    for(i=1;i<=n;i++)
    {   p=65;
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
       for(j=1;j<=i;j++)
       {
        printf("%c ",p++);
       }
       p=p-2;
       for(j=1;j<i;j++)
       {
        printf("%c ",p--);
       }
        printf("\n");
    }
}