#include <stdio.h>

int main(void)
{
    int i,j,n=4,p;
    for(i=1;i<=n;i++)
    {   p=1;
        for(j=1;j<=i;j++)
        {   
            if(j==n)
            break;
            printf("%d ",p++);
        }
        if(i==n)
        {
            p++;
        }
        for(j=i;j<(n*2)-i-1;j++)
        {
            printf("  ");
        }
        p=p-1;
        for(j=1;j<=i;j++)
        {   
           
            printf("%d ",p--);

        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {   p=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p++);
        }
        for(j=i;j<(n*2-i)-1;j++)
        {
            printf("  ");
        }
        p=p-1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p--);
        }
        printf("\n");
    }
   
}