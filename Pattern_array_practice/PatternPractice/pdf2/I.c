#include <stdio.h>

int main(void)
{
    int i,j,n=5,k=1,s;
    printf("*\n");
    for(i=1;i<=n;i++)
    {   
     printf("*");
     for(j=1;j<=i;j++)
     {
        printf("%d",j);
     }
     for(j=i-1;j>=1;j--)
     {
        printf("%d",j);
     }
        printf("*");
     printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {   printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("*");
        printf("\n");
    }
    printf("*\n");
    
    
    
}