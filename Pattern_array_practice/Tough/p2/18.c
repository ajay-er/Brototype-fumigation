#include <stdio.h>

int main(void)
{
   
        int i,j,n=5;
        for(i=1;i<n*2;i++)
        {
            for(j=1;j<n*2;j++)
            {
                if(j<=n+i-1  && i<n|| i<n &&  j>=n-i+1 || i>n && j>=i-n+1  )
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