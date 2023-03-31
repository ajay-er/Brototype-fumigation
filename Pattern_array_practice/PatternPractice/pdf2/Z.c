#include <stdio.h>

int main(void)
{
    int i,j,n=10,k,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("0 ");
        }
        for(s=i;s<n;s++)
        {
            printf("^ ");
        }
        for(s=i;s<n;s++)
        {   
            printf("^ ");
        }
        for(k=n/2;k<=i;k++)
        {
            printf("0 ");
        }
        printf("\n");
    }
}