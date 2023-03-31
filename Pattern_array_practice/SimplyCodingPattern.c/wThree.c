#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }

      printf("\n");
    }for(i=2;i<=n;i++)
    {
        for(s=0;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {   
            printf("* ");
        }
        printf("\n");
}
}