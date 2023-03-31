#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k;
    for(i=1;i<=n;i++)
    {   
        for(s=1;s<i;s++)
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)
        {   
            if(i%2==0)
            {
                printf("$ ");
            }
            else
            printf("* ");
        }
        printf("\n");
    }
}