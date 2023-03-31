#include <stdio.h>

int main(void)
{
    int i,j,n=3,s,k=4;
    for(i=1;i<=n;i++)
    {
        
         for(j=1;j<=2*i-1;j++)
          {   
            printf("* ");
          }
        printf("\n");
          for(s=1;s<=k;s++)
            {   if(s%2==0)
                {
                    printf("$ ");
                }
                else
                {
                    printf("* ");
                }        
            }
            k=k+2;  
        printf("\n");
    }
}