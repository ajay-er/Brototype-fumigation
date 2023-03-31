#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,p,n=5;
    for(i=1,p=1;i<=n;i++,p++)
    {
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<i;j++)
        {
            printf("%d ",p);
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
        }
        printf("\n");
    }
}