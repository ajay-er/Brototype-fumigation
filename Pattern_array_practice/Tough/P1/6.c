#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("* * *");
        }
        else
        {
            printf("* * * * * ");
        }
        if(i==n)
        break;
        printf("\n*\n*\n");
    }
}