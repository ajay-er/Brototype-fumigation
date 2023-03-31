#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,p,s,n=5;
    for(i=1,p=8;i<=n;i++,p-=2)
    {
        for(s=1;s<=i;s++)
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