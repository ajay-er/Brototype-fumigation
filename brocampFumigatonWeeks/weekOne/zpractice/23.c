#include <stdio.h>

int main(void)
{
    int i,j,n=4,p=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\n");
        }
        if(i%2!=0)
        {
            p=p+2;
        }
        else
        {
            p=p+4;
        }
        for(j=1;j<=p;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}