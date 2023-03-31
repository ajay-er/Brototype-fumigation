#include <stdio.h>

int main(void)
{
    int i,j,n=9,p=1;
    for(i=1;i<=n;i++)
    {   
        p=i;
        for(j=1;j<=i;j++)
        {
            if(p%2==0)
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
            }
            p++;
        }
        printf("\n");
        p--;
    }
}