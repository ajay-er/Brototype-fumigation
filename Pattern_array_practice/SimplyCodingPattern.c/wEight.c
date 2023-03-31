#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,k,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   if(j==n){
            break;
            }
            else{
            printf("* " );}
        }
        for(s=i+1;s<=n;s++)
        {
            printf("  ");
        };for(s=i+2;s<=n;s++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }
        for(s=2;s<=i;s++)
        {
            printf("  ");
        }
        for(s=3;s<=i;s++)
        {
            printf("  ");
        }
        for(k=i;k<=n;k++)
        {
            printf("* ");
        }
        printf("\n");

    }
}