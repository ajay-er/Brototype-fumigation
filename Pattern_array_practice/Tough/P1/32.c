#include <stdio.h>

int main(void)
{
    int i,j,n=6,p=0,s;
    for(i=1;i<=n;i++)
    {    s=p;
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",s--);
        }p++;
        s=s+2;
        for(j=2;j<=i;j++)
        {
            printf("%d ",s++);
        }

        printf("\n");
    }
}