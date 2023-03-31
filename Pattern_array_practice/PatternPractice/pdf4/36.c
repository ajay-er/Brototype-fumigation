#include <stdio.h>

int main(void)
{
    int i,j,n=3,k=2;
    printf("*\n");
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
        for(j=1;j<=3*i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}