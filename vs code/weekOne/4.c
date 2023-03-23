#include <stdio.h>

int main(void)
{
    int i,j,n=4,p=3;
    for(i=1;i<n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
        }
        p++;
        printf("\n");
    }
     for(i=n;i>=1;i--)
    {   
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
        }
        p--;
        printf("\n");
    }
}