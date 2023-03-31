#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,p,n=5;
    for(i=1;i<=n;i++)
    {
        p=1;
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }
}