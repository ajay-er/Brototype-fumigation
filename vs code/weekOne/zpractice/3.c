#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int i,j,n=5;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(j==1||i==1|| j+i==n*2 || i==n*2-1 || 
            j==i || j==n*2-1)
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