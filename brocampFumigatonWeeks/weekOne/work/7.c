#include <stdio.h>
int main(void)
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {   if(j==1 || j==2*i-1)
            {
                printf("*");
            }
            else
            printf("_");
        }
        printf("\n");
    }
}