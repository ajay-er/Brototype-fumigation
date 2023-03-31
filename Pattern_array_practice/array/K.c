#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n=4;
    int p=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   
            if(j%2==0)
            {
                printf("* ");
            }        
               printf("%d ",p);      
        }
        p++;
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        p--;
        for(j=i;j<=n;j++)
        {
          if(j%2==0)
            {
                printf("* ");
            }        
               printf("%d ",p); 
        }
        
        printf("\n");
    }

}