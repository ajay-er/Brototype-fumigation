#include <stdio.h>

int main(void)
{
    int i,j,n=3,p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3*i;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(p=1;p<=i;p++)
        {
            printf("*\n");
        }
    }
}