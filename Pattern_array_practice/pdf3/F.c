#include <stdio.h>

int main(void)
{
    int i,j,n=3,s,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\n");
        }
        
        for(s=1;s<=3*i;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
}