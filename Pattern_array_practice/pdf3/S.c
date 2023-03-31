#include <stdio.h>

int main(void)
{
    int i,j,n=3,p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i*i;j++)
        {
            printf("* ");
            if(j%(i*2)==0)
            {
                printf("\n");
            }
        }
        if(i==n)
        {
            break;
        }
        for(p=1;p<=3;p++)
        {
            printf("*\n");
        }
    }
}