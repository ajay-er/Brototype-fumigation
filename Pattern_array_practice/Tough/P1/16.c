#include <stdio.h>

int main(void)
{
    int i,j,n=5,m;
    for(i=1;i<=n;i++)
    {   m=i;
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",m);
           m=m+i;
        }
        printf("\n");
    }

}