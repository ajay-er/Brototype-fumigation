#include <stdio.h>

int main(void)
{
    int i,j,n=3,p=1;
    for(i=1;i<=n;i++)
    {   p=p+p;
        for(j=1;j<=i;j++)
        {
            printf("X\n");   
        }
        for(j=1;j<=i;j++)
        {
            printf("_ ");
        }
        printf("\n");
        for(j=1;j<=p;j++)
        {
            printf("X ");
        }
        printf("\n");
    }
}