#include <stdio.h>

int main(void)
{
    int i,j,n=3,m=1;
    for(i=1;i<=n;i++)
    {    m=m+m;
        for(j=1;j<=2*i;j++)
        {
            printf("X ");
            if(j%2==0)
            {
                printf("\n");
            }
        }
        for(j=1;j<=i;j++)
        {
            printf("-");
        }
        
        for(j=1;j<=m;j++)
        {
            printf("X ");
        }
        printf("\n");
    }
}