#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,p,n=5;
    for(i=1,p=1;i<=n;i++,p++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",p);
        }
        printf("\n");
    }
}