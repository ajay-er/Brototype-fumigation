#include <stdio.h>

int main(void)
{
    int i,j,n=4,k=1,s;
    for(i=1;i<=n;i++)
    {   k=1;
        for(j=1;j<=n*2;j++)
        {
            if(j<=i || j>n*2-i)
            {
                printf("%d ",k++);
            }
            else
            {   
                printf("* ");
            }
        }

        printf("\n");
    }
}