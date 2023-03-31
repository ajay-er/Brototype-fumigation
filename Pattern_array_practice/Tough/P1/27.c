#include <stdio.h>

int main(void)
{
    int i,j,p,n=10;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {   
            if(j<=i)
            printf("* ");
            else
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}