#include <stdio.h>

int main(void)
{
    int i,j,n=3,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=6*i;j++)
        {
            printf("* ");
            if(j%(3*i)==0)
            {
                printf("\n");
            }
        }
        if(i==n)
        break;
        for(s=1;s<=2*i-1;s++)
        {
            printf("*\n");
        }
       
    }
}