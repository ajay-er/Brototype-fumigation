#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2-p;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*\n");            
        }
        p+=2;
    }
}