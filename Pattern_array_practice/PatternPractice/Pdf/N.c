#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,p=n;
    for(i=1;i<=n;i++)
    {   
        for(j=2;j<=i;j++)
        {
            printf("  ");
        }
        for(s=1;s<=(2*p)-1;s++)
        {
            printf("* ");
        }p--;
        printf("\n");
    }
}