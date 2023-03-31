#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,p,s,j,n=15;
    for(i=1;i<=n;i++)
    {   p=65;
        for(j=1;j<=i;j++)
        {
            if(j==n)
            {
                break;
            }
            else
            {
                printf("%c ",p++);
            }
            
        }
        for(s=i;s<n;s++)
        {
            printf("  ");
        }
        for(s=i+1;s<n;s++)
        {
            printf("  ");
        }p=65;
        for(j=1;j<=i;j++)
        {
            
            printf("%c ",p++);
        }
        printf("\n");

    } 
    for(i=2;i<=n;i++)
    {   p=65;
        for(j=i;j<=n;j++)
        {
            printf("%c ",p++);
        }
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        for(s=2;s<i;s++)
        {
            printf("  ");
        }
        p=65;
        for(j=i;j<=n;j++)
        {
            printf("%c ",p++);
        }
        printf("\n");

    
    
    }


}