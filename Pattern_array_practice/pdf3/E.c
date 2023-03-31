#include <stdio.h>

int main(void)
{
    int i,j,n=4,k,s;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=(3*i*i);j++)
        {
            printf("* ");
            if(j%(3*i)==0)
            printf("\n");
        }
        if(i==n)
        break;
        for(k=1;k<=3;k++)
        {
            printf("*\n");
        }
    }
}