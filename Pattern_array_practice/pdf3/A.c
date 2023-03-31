#include <stdio.h>

int main(void)
{
    int i,j,n=4,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*5 ;j++)
        {
            printf("* ");
        }
        printf("\n");
        if(n==i)
        {
            break;
        }
        for(s=1;s<=i;s++)
        {
            printf("* ");
             printf("\n");
        }
       
       

    }
}