#include <stdio.h>

int main(void)
{
    int i,j,n=9,s=5,k=3;
    for(i=1;i<=n+1;i++)
    {   
        if(i%4==0)
        {
            i=i+1;
        }
        for(j=1;j<=i;j++)
        {   
            if(j%2==0)
            {
             printf("%d ",s);
             s=s+5;
            }
            else
            {
                printf("%d ",k);
                k=k+3;
            }
        }
        printf("\n");
    }

}