#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<n*2;i++)
    {   
        for(j=1;j<n*2;j++)
        {
            if(j<=i  && i<=n || i<=n && j>=n*2-i || i>n && j<=n*2-i || j>=i && i>n  )
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