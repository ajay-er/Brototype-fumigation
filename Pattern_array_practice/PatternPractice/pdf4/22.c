#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i*2-1;j++)
        {   
           printf("  ");
        }
        printf("\n");
    }
}