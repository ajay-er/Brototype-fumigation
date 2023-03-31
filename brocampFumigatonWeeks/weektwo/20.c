#include <stdio.h>

int main(void)
{
    int i,j,n=4,p=2;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("*\n");
            p=p+2;
        }
        else
        {
            printf("*\n*\n");
            p=p+4;
        }
        if(i==n)
        break;

        for(j=1;j<=p;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}