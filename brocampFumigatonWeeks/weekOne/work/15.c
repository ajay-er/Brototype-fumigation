#include <stdio.h>

int main(void)
{
    int i,j,k,n=4;
    for(i=1;i<n*2;i++)
    {   k=1;
        for(j=1;j<n*2;j++)
        {
            if(j<=i  && i+j<=n*2  )
            printf("%d ",k++);
            else if((i<=j && i+j>=n*2))
            printf("%d ",k-=1);
            else
            printf("  ");
        }
        printf("\n");
    }
}