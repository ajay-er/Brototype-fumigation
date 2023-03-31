#include <stdio.h>
int main(void)
{
    int i,j,n=3,p=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("*\n");
        }
        if(i%2==1)
        {
            p=p+2;
        }
        else
        {
            p=p+3;
        }
        for(j=1;j<=p;j++)
        {
            printf("* ");
        }
        printf("\n");

    }
}