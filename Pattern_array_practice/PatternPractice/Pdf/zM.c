#include <stdio.h>

int main(void)
{
    int i,j,n=4,k,s;
    for(i=1;i<=n;i++)
    {   k=1;
        for(j=i;j<=n;j++)
        {
            printf("%d ",k++);
        }
        for(s=2;s<=i*2-1;s++)
        {
            printf("* ");
        }
        k=k-1;
        for(j=i;j<=n;j++)
        {
            printf("%d ",k--);
        }
        printf("\n");
    }
}