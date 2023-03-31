#include <stdio.h>

int main(void)
{
    int i,j,n=5,k,s;
    for(i=1;i<n;i++)
    {   
        for(j=1;j<=i;j++)
        {    k=j;
            if(k%2==0)
            {
                printf("_# ");
                
            }
            else
            printf("# "); 
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {   k=1;
        for(j=i;j<=n;j++)
        {   
            if(k%2==0)
            {
                printf("_# ");
                
            }
            else
            {
                printf("# ");
                
            }
            k++;
        }
        
        printf("\n");
    }
}