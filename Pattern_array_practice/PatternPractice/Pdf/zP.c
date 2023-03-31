#include <stdio.h>

int main(void)
{
    int i,j,n=6,k=1,s;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {   
            if(j%2==0)
            {
                printf("* ");
            }
            else
            printf("%d ",k);

        }
        
        k++;
        printf("\n");
    }k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {   
            if(j%2==0)
            {
                printf("* ");
            }
            else
            printf("%d ",k);
        }
        k--;
        printf("\n");
    }
}