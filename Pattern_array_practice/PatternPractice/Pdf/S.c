#include<stdio.h>

int main(void)
{
    int i,j,a;
    int n=5;

    a=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==a || i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for(j=1;j<=n;j++)
        {
            if(j==a || i==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
         a--;
        printf("\n");
    }
    
}