#include <stdio.h>

int main(void)
{
    int i,j,n=5,p,k;
    for(i=1;i<=n*2;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i|| (n*2-i)+1<=j)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}