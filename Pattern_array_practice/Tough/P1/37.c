#include <stdio.h>

int main(void)
{
    int i,j,n=5,s;
    
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i*i;j++)
        {
            printf("* ");
            if(j%i==0)
            {
                printf("\n");
            }
         
        }
        printf("\n");
    }
}