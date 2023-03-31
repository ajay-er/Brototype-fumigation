#include <stdio.h>

int main(void)
{
    int i,j,n=5,s,k;
    for(i=1;i<n;i++) 
    {
        for(k=i;k<n;k++)
        {   
            if(k==1)
            {   k=4;
                printf(" ");
            }
            else
            {
             printf(" ");
            }
            
        }
        for(s=i;s<=n;s++)
        {        
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");

    }
}