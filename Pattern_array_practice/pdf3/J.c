#include <stdio.h>

int main(void)
{
    int i,j,n=4,p,s;
    for(i=1;i<=n;i++)
    {   s=1;
        for(j=1;j<n*4-2;j++)
        {   
            if(i>=n*2-j && j<n*2+i-1   )
            {   
                if(s%2==0)
                {
                    printf("* ");
                    
                }
                else
                {
                printf("%d ",i);
                
                }
            }
            else
            printf("* ");
           
        }
        
        printf("\n");
    }
}