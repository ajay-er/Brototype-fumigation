#include <stdio.h>

int main(void)
{
    int i,j,n=4, k=n,s;
    for(i=1;i<=n;i++)
    { 
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        for(j=i;j<=k+2;j++)
        {
            printf("* ");
        }
        k=k-1;

        
        printf("\n");
    }
}