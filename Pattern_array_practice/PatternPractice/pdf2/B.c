#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k=1;
    for(i=1;i<=n;i++)
    {   k=i;
        for(s=i+1;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        k=k-2;
        for(j=1;j<i;j++)
        {   
            printf("%d ",k--);
        }
        printf("\n");
    }
}