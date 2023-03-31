#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,a=0,s,l;
    for(i=1;i<=n;i++)
    {   
        a=i;
        for(j=i;j<=n;j++)
        {
            printf("  ");
        }
        
        for(k=1;k<=i;k++)
        {      a--;
            printf("%d ",a);
        }
        l=1;
        for(s=1;s<i;s++)
        {
            printf("%d ",l++);
        }
        printf("\n");
    }
}