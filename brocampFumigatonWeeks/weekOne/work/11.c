#include <stdio.h>

int main(void)
{
    int i,j,k,n=5;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<n*2;j++)
        {   
            if(j==n-i+1 || j==k || j==n+i-1
                || j==n || i==n || j+i==(n*2)+n-1 || i-j==n-1 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}