#include <stdio.h>

int main(void)
{
    int i,j,n=5,s=1;
    int p=65;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(s%2!=0)
            {
                printf("%c ",p+32);
                p++;
                s++;
            }
            else
            {
                printf("%c ",p);
                p++;
                s++;
            }

        }
        printf("\n");
    }
}