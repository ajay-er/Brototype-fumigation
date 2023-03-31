#include <stdio.h>

int main(void)
{
    int i,j,n=3,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("* ");
            if(j==i)
            printf("\n");
        }
        printf("\n");
        for(s=1;s<=3*i;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
}