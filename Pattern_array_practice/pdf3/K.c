#include <stdio.h>

int main(void)
{
    int i,j,n=4 ,p,s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i*2;j++)
        {   
            printf("* ");
            if(j==i)
            printf("\n");
        }
        printf("\n");   
        for(s=1;s<=3*i;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
}