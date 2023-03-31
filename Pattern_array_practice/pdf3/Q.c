#include <stdio.h>

int main(void)
{
    int i,j,n=6,p=1,s=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if (i%2==0)
            {
                printf("%d ",p);
            }
            else
            {
                printf("%c ",s);
            }
        }
        printf("\n");
        if(i%2==0)
        {
            p++;
        }
        else
        {
            s++;
        }
    }
}