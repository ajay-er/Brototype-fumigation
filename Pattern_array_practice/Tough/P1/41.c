#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("_ ");
        }
        printf("X\n");
        if(i==n)
        break;
        for(j=1;j<=i+i;j++)
        {
            printf("X" );
        }
        printf("\n");
    }
}