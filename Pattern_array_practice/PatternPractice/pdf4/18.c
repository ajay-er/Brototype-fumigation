#include <stdio.h>

int main(void)
{
    int i,j,n=5,s;
    for(i=1;i<=n;i++)
    {   s=i;
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {   
            printf("%d ",s);
            s=s+i;
        }
        printf("\n");
    }
}