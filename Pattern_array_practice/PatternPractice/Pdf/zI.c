#include <stdio.h>

int main(void)
{
    int i,j,n=5,s;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            printf("_ ");
        }
        for(s=1;s<=i;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
}