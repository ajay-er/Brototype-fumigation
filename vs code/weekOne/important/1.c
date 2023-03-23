#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(i+j<n+1|| j-i>n-1 || i+j>(3*n)-1 || i-j>n-1)
            {
                printf("  ");
            }
            else if(j<=n)
            {
                printf("%d ",j);
            }
            else if(j>n)
            {
                printf("%d ",2*n-j);
            }
        }
        printf("\n");
    }
}