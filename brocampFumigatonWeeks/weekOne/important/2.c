#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<2*n;i++)
    {
        for( j=1;j<n*2;j++)
        {
            if((j<=i || j+i<=n*2 ) && (j>=i || j+i>=2*n))
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