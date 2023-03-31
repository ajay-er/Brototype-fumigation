#include <stdio.h>
 
int main(void)
{
    int i,j,n=5,k,p=1,s;
    for(i=1;i<n;i++)
    {   
        for(k=i;k<=n;k++)
        {
            printf("* ");
        }
      
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }
   
}