#include <stdio.h>

int main(void)
{
    int i,j,n=5,s;
    for(i=1;i<n;i++)
    {   
       
        for(j=1;j<=n*2;j++)
        {       
            if(j>n*2-(2*i-1))
            {
            if(i%2==0)
            printf("^ ");
            else
            printf("* ");

            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {   
       
        for(j=1;j<=n*2;j++)
        {       
            if(j>n*2-(2*i-1))
            {
            if(i%2==0)
            printf("^ ");
            else
            printf("* ");

            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
           }
}