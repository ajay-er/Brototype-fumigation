#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s,j,n=5;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)

        {
            printf(" ");
        }
        for(s=i;s<=n;s++)
        {
            printf("* ");
        }
        printf("\n");
    } 
     for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)

        {
            printf(" ");
        }
        for(s=1;s<=i;s++)
        {
            printf("* ");
        }
        printf("\n");
    } 
}