#include <stdio.h>

int main(void)
{
    int i,j,n=3,m=n,k;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=m;j++)
        {
             for(k=1;k<=j;k++)
              {
                  printf("* ");
              }
              printf("\n");
        }
        m++;
    }
    
}