#include <stdio.h>

int main(void)
{
    int i,j,n=5,p,k,s;
    for(i=1;i<=n;i++)
    {   
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        printf("%d ",i);    
        for(s=i;s<n*2-i-1;s++)
        {   
              printf("  ");
        }
       if(i!=n)
       {
         printf("%d ",i);
       }   
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        printf("%d ",i);

        for(j=1; j<=((n - i ) * 2 - 1); j++)
        {
            printf("  ");
        }
        printf("%d ",i);
        printf("\n");
    }
}