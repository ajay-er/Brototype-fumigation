#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {   
        if(i%2==0)
        {
            printf("*\n*\n");
        }
        else
        {
            printf("*\n");
        }
        for(j=1;j<=2*i+2;j++)
        {   
            printf("* ");
        }
        printf("\n");
    }
}