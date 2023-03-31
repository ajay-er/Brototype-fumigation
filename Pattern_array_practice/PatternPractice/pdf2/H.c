#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k,p=1;
    for(i=1;i<n;i++)
    {   p=1;
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }  
    for(i=1;i<=n;i++)
    {    p=1;
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=1;j<=n*2-(2*i-1);j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }
}