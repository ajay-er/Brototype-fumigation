#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=5;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf("  ");

        }
        for(j=i;j<n;j++)
        {
            if(i%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }

        }
        for(j=i;j<=n;j++)
        {
            if(i%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }

        }
        printf("\n");
    }
}