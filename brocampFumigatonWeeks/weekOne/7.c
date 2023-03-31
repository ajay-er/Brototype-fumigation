#include <stdio.h>

int main(void)
{
    int i,j,n=5,p;
    for(i=1;i<n;i++)
    {   p=1;
        for(j=1;j<=i;j++)
        {   
            if(j==1 )
            {
                printf("* ");
            }
            else
            printf("%d ",p++);
        }
        p=p-2;
         for(j=2;j<=i;j++)
        {   
            if(j==i)
            printf("* ");
            else
            printf("%d ",p--);
        }
        printf("\n");    
    }

    for(i=n;i>=1;i--)
    {   p=1;
        for(j=1;j<=i;j++)
        {   
            if(j==1 )
            {
                printf("* ");
            }
            else
            printf("%d ",p++);
        }
        p=p-2;
         for(j=2;j<=i;j++)
        {   
            if(j==i)
            printf("* ");
            else
            printf("%d ",p--);
        }
        printf("\n");    
    }

}