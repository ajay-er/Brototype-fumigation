#include <stdio.h>

int main(void)
{
    int i,j,n=4,p=1,s;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=2*i-1;j++)
        {   
            if(j%2==0)
            printf("* ");
            else
            printf("%d ",p++);
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {    
        s=p-i;
        for(j=1;j<=2*i-1;j++)
        {   
            if(j%2==0)
            printf("* ");
            else
            printf("%d ",s++);
        }
        p=p-i;
        printf("\n");
    }
}