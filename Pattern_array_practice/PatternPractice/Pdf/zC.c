#include <stdio.h>

int main(void)
{
    int i,j,n=5,s;
    for(i=1;i<=n;i++)
    {   
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<=n;j++)
        {
            if(j==1 || i==1||j==n||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}