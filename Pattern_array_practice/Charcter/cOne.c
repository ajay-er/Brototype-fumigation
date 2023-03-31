#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,p,j,n=5;
    for(i=1,p=65;i<=n;i++,p++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",p);
        }
        printf(" \n");
    }
}