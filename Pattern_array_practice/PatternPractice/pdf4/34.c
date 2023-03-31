#include <stdio.h>

int main(void)
{
    int i,j,n=5,m;
    for(i=1;i<=n;i++)
    {   
        m=1;
        for(j=i;j<=n;j++)
        {   
            printf("%d ",m++);
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {   
        m=1;
        for(j=i;j<=n;j++)
        {   
            printf("%d ",m++);
        }
        printf("\n");
    }
   
}