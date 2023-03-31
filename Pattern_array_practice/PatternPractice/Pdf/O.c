#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k;
    for(i=1;i<n;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(i=n;i>=1;i--)
    {
        for(s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}