#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=1;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=2*i-1;j++)
        {   
            if(j==1 || j==2*i-1)
            {
                printf("* ");
            }
            else
            {
                printf("%d ",p++);
            }
        }
         p=1;
        printf("\n");
    }
}