#include <stdio.h>

int main(void)
{
    int i,j,n=6,k=n,s;
    for(i=1;i<n;i++)
    {   k=1;
        for(j=1;j<=i;j++)
        {   
            if(j==1)
            {
                printf("* ");
            }
            else
            {
                 printf("%d ",k++);
            }
           
        }k=k-2;
        for(s=1;s<i;s++)
        {      
            if(s==n || s==i-1)
            {
                 printf("* ");
            }
            else
            {   
                printf("%d ",k--);
            }
           
        }
        printf("\n");
    }
    
    for(i=1;i<=n;i++)
    {   k=1;
        for(j=i;j<=n;j++)
        {
            if(j==i)
            {
                printf("* ");
            }
            else
            {
                printf("%d ",k++);
            }
        }
        k=k-2;
        for(s=i;s<n;s++)
        {      
            if(s==n-1 )
            {
                 printf("* ");
            }
            else
            {   
                printf("%d ",k--);
            }
           
        }
        printf("\n");
    }
}