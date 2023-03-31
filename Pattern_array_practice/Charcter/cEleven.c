#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s,j,p,n=5,k=69;;
    for(i=1;i<=n;i++,k--)
    {   p=k;
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(s=i;s<=n;s++)
        {
            printf("%c ",p--);
        }
        printf("\n");
        
    } 
}