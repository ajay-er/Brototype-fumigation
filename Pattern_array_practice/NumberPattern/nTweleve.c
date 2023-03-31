#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,p,n=5;
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("$ ");
            }
            else
            {
                printf("# ");
            }

        }
        for(j=1;j<i;j++)
        {
            if(i%2==0)
            {
                printf("$ ");
            }
            else
            {
                printf("# ");
            }

        }
        printf("\n");
    }
}