#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i  && j<=2*n-i)
            {
                printf("%d ",i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}