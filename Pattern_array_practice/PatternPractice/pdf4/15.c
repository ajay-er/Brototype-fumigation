#include <stdio.h>

int main(void)
{
    int i,j,n=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*2;j++)
        {
            printf("* ");
            if(j%i==0)
            {
                printf("\n");
            }
        }
        for(j=1;j<=3*i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}