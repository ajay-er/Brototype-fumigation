#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s,j,k,p,n=9;
    for(i=1,k=9;i<=n;i++,k--)
    {   p=k;
        for(s=1;s<i;s++)
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