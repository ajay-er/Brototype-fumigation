#include <stdio.h>

int main(void)
{   
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j==1 || j==n*2)
            {
                printf("x");
            }
            if(i+j<n+1 || j-i>n-1 )
            {
                printf(" ");
            }
            
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}