#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n=5,p,s;
    for(i=1;i<n;i++)
    {
        p=1;
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<i;j++){
            printf("%d ",p++);
        }
        for(j=1;j<=i;j++){
            printf("%d ",p++);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        p=1;
        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=i;j<n;j++)
        {
            printf("%d ",p++);
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",p++);
        }
        printf("\n");

    }
}