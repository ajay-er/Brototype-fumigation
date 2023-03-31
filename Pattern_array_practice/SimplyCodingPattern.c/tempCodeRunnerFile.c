#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,k,n=8;
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
        
    }}