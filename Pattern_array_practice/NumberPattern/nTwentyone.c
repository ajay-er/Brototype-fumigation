#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,p,n=5;
    for(i=1;i<=n;i++)
    {
            p=5;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p--);
        }
        printf("\n");
    }
}