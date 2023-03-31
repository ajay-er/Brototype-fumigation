#include <stdio.h>

int main(void)
{
    int i,j,n=5,k=n,s;
    for(i=1;i<n;i++)
    {   
        
        for(j=1;j<n*2;j++)
        {
            if(j<=k || j>=(n*2)-k )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }k--;
        printf("\n");
       
    }
    for(i=1;i<=n;i++)
    {   
        
        for(j=1;j<n*2;j++)
        {
            if(j<=i || j>=(n*2)-i )
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