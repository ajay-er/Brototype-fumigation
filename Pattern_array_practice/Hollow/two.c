#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=9;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n/2+1||j==n/2+1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}