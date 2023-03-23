#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n=5,p,k=1;
    for(i=1;i<=n;i++)
    {   p=1;
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                printf("%d",k);
            }
            else
            printf("%d ",p++);
        }
        printf("\n");
    }
}