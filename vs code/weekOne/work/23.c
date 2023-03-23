#include <stdio.h>

int main(void)
{
    int i,j,n=3,p=2;
    for(i=1;i<2*n;i++)
    {
        for(j=1;j<2*n;j++)
        {
            if(i==n*2-1 || j==n*2-1 || i==1 || j==1)
            {
                printf("%d ",n);
            }
            else
            {
                printf("  ");
            }
           
       
    }
    printf("\n");
    }}
