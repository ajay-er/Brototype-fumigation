#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j+i==n+1 || i-j==n-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }

        }   printf("\n");    
    }
}