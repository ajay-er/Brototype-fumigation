#include <stdio.h>

int main(void)
{
    int i,j,n=4,p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=4*i;j++)
        {
            printf("* ");
        }
        printf("\n");
        if(i==n)
        break;
        printf("* *\n");
    }    
}