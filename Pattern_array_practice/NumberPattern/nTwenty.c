#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,p,k,n=9;
    for(i=1;i<=n;i++)
    {   
        p=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p++);
        }
        for(s=i;s<n;s++)
        {
            printf("  ");
        }
        for(s=i;s<n;s++)
        {
            printf("  ");
        }p=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }for(i=2;i<=n;i++)
    {
        p=1;
        for(j=i;j<=n;j++)
        {
            printf("%d ",p++);
        }
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
         for(s=1;s<i;s++)
        {
            printf("  ");
        }p=1;
        for(j=i;j<=n;j++)
        {
            printf("%d ",p++ );
        }
        printf("\n");
        


        }
    }
