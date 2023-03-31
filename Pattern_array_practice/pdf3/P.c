#include <stdio.h>

int main(void)
{   
    int i,j,n=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("* ");
            if(j==2)
            {
                printf("\n");
            }
        }
        printf("\n");
        for(j=1;j<=4*i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}