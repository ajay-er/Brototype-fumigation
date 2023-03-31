#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i,j,n=5,k=65,s,m=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   
            if(m%2==0)
            {
                 printf("%c ",k);
                 k++;
                  m++;
            }
           else
           {        
                   s=k+32;
                  printf("%c ",s);
                  k++;
                   m++;
           }
        }
       
        printf("\n");
    }
}