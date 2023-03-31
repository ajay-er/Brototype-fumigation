#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2==0)
            {
            printf("* ");
            }
            else
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2==0)
            {
            printf("* ");
            }
            else
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}