#include <stdio.h>

int main(void)
{
    int i,j,n=5,s=n,k;
    for(i=1;i<=n;i++)
    {   k=s;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }s--;
        printf("\n");
    }
}