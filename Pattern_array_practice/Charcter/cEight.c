#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,p,s,j,n=5;
    for(i=1;i<=n;i++)
    {
        p=65;
        for(j=1;j<=i;j++)
        {
            printf("%c ",p++);
        }
        printf("\n");
        
    } 
}