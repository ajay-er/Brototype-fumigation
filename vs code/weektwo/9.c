#include <stdio.h>

int main(void)
{
    int i,j,n=5,c=65,p=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d ",p);
            }
            else
            {
                printf("%c ",c);
            }
        }
        if(i%2==0)
        {
            p++;
        }
        else
        {
            c++;
        }
        printf("\n");
    }
}