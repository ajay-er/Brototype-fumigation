#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=n*2;
    for(i=1;i<=n;i++)
    {     
        for(j=1;j<=p;j++)
        {
            printf("* ");
        }
        for(j=1;j<=i;j++)
        {
            printf("\n*");
        }
        p-=2;
        printf("\n");
    }
}