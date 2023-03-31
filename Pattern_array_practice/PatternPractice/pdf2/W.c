#include <stdio.h>

int main(void)
{
    int i,j,n=4,k=1,p=2,s;
    for(i=1;i<=n;i++)
    {    
        for(s=1;s<=p;s++)
        {
             for(j=1;j<=i;j++)
             {   
               printf("* ");
             }
             printf("\n");            
        }
        
        for(j=1;j<=n+k-2;j++)
        {   
            if(j%2==0)
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
            }
        }k=k+2;
        
        printf("\n");


    }
}