#include <stdio.h>

int main(void)
{
    int i,j,s,k,n=3;
    for(i=1;i<n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("* # $ ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* # $ ");
            
        }
        printf("\n");
    }
}