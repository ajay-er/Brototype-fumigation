#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,n=5,j,p=1;
    for(i=1;i<=n;i++)
    {   
       
        for(j=5;j>=p;j--)
        {
            if(i==j)
            {
                printf("*  ");
            }
            else
            {
                printf("%d  ",j);
            }
            
        }
        printf("\n");
    }
}