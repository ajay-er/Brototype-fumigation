#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=5;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(s=i;s<=n;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
}