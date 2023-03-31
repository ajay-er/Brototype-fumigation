#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k=1;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
        }k++;
        printf("\n");
    }
}