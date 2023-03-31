#include <stdio.h>

int main(void)
{
    int i,j,n=9,k=n,s;
    for(i=1;i<=n;i++)
    {   s=k;
        for(j=1;j<=i;j++)
        {
            printf("%d ",s);
            s++;
        }
        k--;
        printf("\n");
    }
}