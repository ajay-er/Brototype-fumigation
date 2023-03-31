#include <stdio.h>

int main(void)
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {   
            if(k%2==0)
            {
                printf("A");
            }
            else
            printf("*");
        }  
           
        printf("\n");
    }
}