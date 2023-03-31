#include <stdio.h>

int main(void)
{
    int i,j,n=5,p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(i+j<=n+1 )
            {
                printf("%d ",j);
                p=j;
            }
            else if(j-i>n-1)
            {   
                printf("%d ",p--);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}