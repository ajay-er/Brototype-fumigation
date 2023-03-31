#include <stdio.h>

int main(void)
{
    int i,j,n=4,k=1,s,m=1;
    for(i=1;i<=n;i++)
    {   k=i;
        for(j=1;j<=i;j++)
        {   
            printf("%d ",k++);
        }
        k=k-3;
        for(s=1;s<i;s++)
        {   
            printf("%d ",k--);
            
        }
        printf("\n");
         
    }
}