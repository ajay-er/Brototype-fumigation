#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(j==1 || j==i || j==n*2-1 || i==1 || i==n*2-1 ||i+j==n*2)
            {
                printf("*");
            }
            else
            printf(" ");
        }
         printf("\n");
       
    }
}