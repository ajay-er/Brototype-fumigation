#include <stdio.h>

int main(void)
{
    int i,j,n=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=6*i;j++)
        {
            printf("* ");
            if(j%(3*i)==0)
            {
                printf("\n");
            }
        }if(i==n)break;
        printf("*\n*\n*\n");
    }
}