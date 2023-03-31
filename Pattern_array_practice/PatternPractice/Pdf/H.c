#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,p;
    for(i=1;i<n;i++)
    {   
        for(k=i;k<=n;k++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
              printf("* ");
          
        }
        printf("\n");
    }
    p=n;
     for(i=1;i<=n;i++)
    {   
        for(k=1;k<=i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*p)-1;j++)
        {
              printf("* ");
             
          
        } p--;
        printf("\n");
    }
}