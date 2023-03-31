#include <stdio.h>

int main(void)
{
    int i,j,n=5,a=65;
    for(i=1;i<=n;i++)
    {   a=65;
        for(j=i;j<=n;j++)
        {
            printf("%c ",a++);
        }
        printf("\n");
    }
}