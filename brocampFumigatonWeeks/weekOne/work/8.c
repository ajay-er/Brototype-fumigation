#include <stdio.h>

int main(void)
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {   
        k=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
        k=k-2;
        for(j=1;j<i;j++)
        {
            printf("%d",k--);
        }
        printf("\n");
    }
}