#include <stdio.h>

int main()
{
    int i,j,n=5,p,d=1;
    for(i=1;i<=n;i++)
    {   p=1;
        for(j=1;j<=i;j++)
        {
            if(j==1 )
            {
            printf("%d ",p++);
            }
            else if(j==i || i==n)
            {
                printf("%d ",p++);
            }
            else
            {
            printf("  ");
            p++;
            }
        }
        printf("\n");

    }
}
