#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,p,s,n=5;
    for(i=1,p=0;i<=n;i++,p+=2)
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