#include <stdio.h>

int main(void)
{
    int i,j,n=8,k,a=0,s,l;
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=n;j++)
        {
            if(j==1 || i==1 || i+j==n+1 )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
     }
}