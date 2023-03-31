#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,a;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n*2;j++)
        {   
            if(j<=i || j>=(n*2)-i)
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
    a=n;
     for(i=1;i<n;i++)
    {
        for(j=1;j<n*2;j++)
        {   
            if(j<a || j>(n*2)-a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            } 
            
            
        }
        printf("\n");
        a--
;    }
  
}