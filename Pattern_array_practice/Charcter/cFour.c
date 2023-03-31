#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,p,s,j,n=5;
    for(i=1,p='E';i<=n;i++,p--)
    {
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=i;j<n;j++)
        {
            printf("%c ",p);
        }
        for(j=i;j<=n;j++)
        {
            printf("%c ",p);
        }
    printf("\n");
        
    } 
}