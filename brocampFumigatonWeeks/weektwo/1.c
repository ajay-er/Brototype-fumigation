#include <stdio.h>

int main(void)
{
    int i,j,n=5,p;

    for(i=1;i<=n;i++)
    {   p=1;
       for(j=i;j<=n;j++)
       {
        printf("%d ",p++);
       }
        printf("\n");
    }
}