#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,s,p='A';
    for(i=1;i<=n;i++)
    {   p='A';
        for(j=i;j<=n;j++)
        {
            printf("%c ",p++);
        }
        for(k=3;k<=2*i-1;k++)
        {
            printf("  ");
        }
        if(i==1)
            p-=2;
        else
            p--;   
        for(s=i;s<=n;s++)
        {   
            if(i==1 && s==n )
            {
                break;
            }          
            printf("%c ",p);
            p--;
        }
        printf("\n");
    }
}