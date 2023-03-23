#include <stdio.h>

int main(void)
{
    int i,j,n=4;
    for(i=1;i<=n*2;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==2 && i==n || j==4 && i==5|| j==1&& i==4 || j==3 && i==n-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }printf("\n");
    }
}