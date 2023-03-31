#include <stdio.h>
int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<n*2;j++)
        {
            if(j<=n-i+1)
            {
                printf("%d ",j);
                
            }
            else if(j>=n+i-1)
            {     
                printf("%d ",10-j);
            }
            else
            {
                printf("  ");
            }
        }
         printf("\n");
      
       
    }
}