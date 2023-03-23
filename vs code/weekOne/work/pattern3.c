#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=1;
    for(i=1;i<n;i++)
    {   p=p+p;
        for(j=1;j<=p;j++)
        {
            printf("* ");
        }
        printf("\n*\n*\n*");
        printf("\n");
    }
}