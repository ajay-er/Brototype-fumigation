#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,p=65,s,j,n=5;
    for(i=1;i<=n;i++,p++)
    {

        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<i;j++)
        {
            printf("%c ",p );
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",p );
        }
        printf("\n");
    } for(i=2,p=68;i<=n;i++,p--)
    {

        for(s=1;s<=i;s++)
        {
            printf("  ");
        }
        for(j=i;j<n;j++)
        {
            printf("%c ",p);
        }
         for(j=i;j<=n;j++)
        {
            printf("%c ",p);
        }
        printf("\n");

    }
}