#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==n)
            {
                break;
            }
            else{
                printf("* ");
            }
            
        }
        for(s=i+1;s<=n;s++)
        {
            printf("  ");
        }
        for(s=i+2;s<=n;s++)
        {
            printf("  ");
        }
         for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }/*for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
        {
            printf("* ");
        }
         for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    } */
       for(i=2;i<=n;i++)
        {
            for(s=i;s<=n;s++)
            {
                printf("* ");
            }
            for(j=1;j<i;j++)
            {
                printf("  ");
            }
             for(j=2;j<i;j++)
            {
                printf("  ");
            }
            for(s=i;s<=n;s++)
            {
                printf("* ");
            }
            printf("\n");
        }
}