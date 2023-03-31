#include <stdio.h>

int main(void)
{
    int i,j,n=3,p=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf("%d\n",i);
            }
        for(j=0;j<=i;j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }
}