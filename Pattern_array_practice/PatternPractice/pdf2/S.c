#include <stdio.h>

int main(void)
{
    int i,j,n=7,k=65,s=1,p,m;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ",s);
                
            }
            else
            {
              printf("%c ",k);

            }
        }
        if(i%2==0)
        {
            s++;
        }
        else
        {
            k++;
        }
        printf("\n");
    }
}