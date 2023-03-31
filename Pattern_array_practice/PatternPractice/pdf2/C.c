#include <stdio.h>

int main(void)
{
    int i,j,n=9,k,s;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<n*2;j++)
        {
            if(j==1|| j==i || j==n*2-1 || j==(n*2-i) ||i==n)
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