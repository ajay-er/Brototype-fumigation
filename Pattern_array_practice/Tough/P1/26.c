#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=65;
    for(i=1;i<=n;i++)
    {   p=65;
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%c ",p++);
        }
        printf("\n");
    }
}