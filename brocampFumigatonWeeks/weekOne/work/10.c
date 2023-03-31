#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,t=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=t;j++)
        {
            for(k=1;k<=j;k++)
            {
                printf("X ");
            }
            printf("\n");
        }
        t++;
        
    }
}