#include <stdio.h>

int main(void)
{
    int i,j,n=8,s,k;
    for(i=1;i<=n;i++)
    {   
        for(j=i+1;j<=n;j++)
        {
            printf("  ");
        }
        for(s=1;s<=(2*i)-1;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=2;i<n;i++)
    {
        for(j=0;j<(n/2+1);j++)
        {   
        
            printf("* ");
        }
        for(s=0;s<n/2+1;s++)
        {
            printf("  ");
        }
         for(k=1;k<=(n/2+1);k++)
        {   
        
            printf("* ");
        }
       
       
        printf("\n");
    }
}