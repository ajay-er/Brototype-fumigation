#include <stdio.h>
int main(void)
{
    int i,j,n=15,s,k;
    for(i=1;i<n;i++)
    {
        for(s=i;s<n;s++)
        {
            printf(" ");
        }
        for(j=1;j<n+i;j++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
          for(k=1;k<n*2;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(s=1;s<i;s++)
        {
            printf(" ");
        }
        for(j=n*2-i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
   
}