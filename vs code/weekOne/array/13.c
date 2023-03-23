#include <stdio.h>

int main(void)
{
    int i,j,n=6,p=5,k=3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   
            if(i%4==0)
            {
                i=i+1;
                p=p-5;
            }
            if(j%2==0)
            {
                printf("%d ",p);
                p=p+5;
            }
            else
            {
                printf("%d ",k);
                k+=3;
            }
        }
        printf("\n");
    }
}