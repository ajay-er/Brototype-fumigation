#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || j==n || i==n)
            {
                printf("* ");
            }
            else
            {
                printf("%c ",p++);
            }
        }
        printf("\n");
    }
}