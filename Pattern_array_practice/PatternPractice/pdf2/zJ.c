#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,s;
    for(i=1;i<=n;i++)
    {   s=1;
        for(j=i;j<n;j++)
        {
            printf("0 ");
        }
        for(k=1;k<=i;k++)
        {
            if(s%2==0)
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
            }
            s++;
        }
        printf("\n");
        
    }
}