#include <stdio.h>

int main(void)
{
    int i,j,n=6,k,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n)
            {
                printf("* ");
            }
            else if(i==(n/2)+1 && j==1 || i==(n/2)+1 && j==n)
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