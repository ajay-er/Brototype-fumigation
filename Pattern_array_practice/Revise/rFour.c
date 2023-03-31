#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=8;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("  ");
            
        }
         for(s=1;s<=i;s++)
        {
            printf("* ");
            
        }
        printf("\n");
    } 
}