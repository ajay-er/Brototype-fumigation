#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,p,s,j,n=13;
    for(i=1,p=65;i<=n;i++,p++)
    {
        for(s=2;s<=i;s++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%c ",p);

        }
        printf("\n");
    } 
}