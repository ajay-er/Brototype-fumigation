#include <stdio.h>

int main(void)
{
    int i,j,n=6;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }    
        for(j=i;j<=n;j++)
        {
            printf("* ");

        }   
         for(j=1;j<i;j++)
        {
            printf("  ");
        }    
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }     
        printf("\n");
    }
     for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }    
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }  
         for(j=1;j<i;j++)
        {
            printf("  ");
        }    
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }    
        printf("\n");
    }
}