#include <stdio.h>

int main(void)
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}