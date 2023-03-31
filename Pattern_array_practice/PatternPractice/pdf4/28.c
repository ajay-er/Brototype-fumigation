#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        { 
            printf("  ");
        }
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}