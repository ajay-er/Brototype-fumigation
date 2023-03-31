#include <stdio.h>

int main(void)
{
    int i,j,n=3,m=3,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            for(s=1;s<=j;s++)
            {
                printf("X ");
            }
            printf("\n");
        }
        m++;
       
    }
}