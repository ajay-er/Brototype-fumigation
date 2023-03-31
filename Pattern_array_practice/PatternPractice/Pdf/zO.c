#include <stdio.h>

int main(void)
{
    int i,j,n=15,k,s;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {    

            printf(" ");
            if(j==n)
            {
             printf("' ");
            }
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        for(j=i;j<=n;j++)
        {
            printf(" ");
            if(j==n)
            {
                 printf("' ");
            }
            
        }
        printf("\n");
    }
}