#include <stdio.h>

int main(void)
{
    int i,j,n=4,s=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5*i;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(j=1;j<=2*s;j++)
        {
            printf("* ");
            if(j%2==0)
            printf("\n");
        }
        s++;
       
    }
}