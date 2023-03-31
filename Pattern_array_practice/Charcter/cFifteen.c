#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n=5,s,p,k=5;
    for(i=1;i<=n;i++,k--)
    {
        p=k;
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",p--);
        }
        printf("\n");
    }
}