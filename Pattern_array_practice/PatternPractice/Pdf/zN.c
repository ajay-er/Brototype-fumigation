#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,s;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j==i)
            {
                printf("* ");
            }
            else
            printf("%d ",j);
        }
        printf("\n");
    }
}