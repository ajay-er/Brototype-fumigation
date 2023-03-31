#include <stdio.h>

int main(void)
{
    int i,j,p,k=1,n=5;
    for(i=1;i<=n;i++)
    {   
        p=k;
        for(j=1;j<=i;j++)
        {
            if(p%2==0)
            {
                printf("$ ");
                  
            }
            else
            {
                printf("* ");
            } 
            p++;
        }
        k++;
        
        printf("\n");
    }
}