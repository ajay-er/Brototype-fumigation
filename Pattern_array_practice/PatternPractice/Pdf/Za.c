#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k;
    for(i=1;i<n;i++)
    {
        for(s=i;s<n;s++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==i )
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
    for(i=1;i<=n;i++)
    {
        for(s=1;s<i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
           if(j==1 || j+i==n+1)
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