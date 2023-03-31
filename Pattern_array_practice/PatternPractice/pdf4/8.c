#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=3;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j=1;j<=5;j++)
            {
                printf("* ");
            }
        }
        if(i==n)
        break;
        printf("\n");
        printf("*\n*\n");
    }
}