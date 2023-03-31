#include <stdio.h>

int main(void)
{
    int i,j,n=4,k=65,p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2==0)
            {
                printf("%c ",k++);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}