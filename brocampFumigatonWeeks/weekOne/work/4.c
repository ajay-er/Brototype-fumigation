#include <stdio.h>

int main(void)
{
    int i,j,n=5,k=1;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i && i<n)
            {
                printf("%d",j);
               /* if(i!=j)
                {
                    printf("*");
                }*/
            }
            else if ( j<=2*n-i && i>=n)
            {
                printf("%d",j);
                /*if(j!=2*n-i)
                {
                    printf("*");
                }*/
            }
            
        }
        printf("\n");
    }
}