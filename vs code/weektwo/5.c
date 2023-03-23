#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
       
        for(j=1;j<=i;j++)
        {
            if(j==i || j==1 || i==n)
            printf("* ");
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}