#include  <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n=11;
    for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {   
                if(j==1||j==n||i+j==n+1||i==j)
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