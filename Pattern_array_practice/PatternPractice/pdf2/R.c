#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,s;
    for(i=1;i<n;i++)
    {   
        for(j=1;j<n*2;j++)
        {
            if(j<=(n+1)-i || j>=n+i-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        } 
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(j<=i || j>=n*2-i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}