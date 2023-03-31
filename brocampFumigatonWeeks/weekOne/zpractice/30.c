#include <stdio.h>

int main(void)
{
    int p=65,i,j,n=5;
    for(i=1;i<=n;i++)
    {   
       
        for(j=1;j<=i;j++)
        { 
            if(p%2!=0)
            {       
                printf("%c ",p);
                
            }
            else
            {  
                printf("%c ",p+32);
            }
            p++;
        }

        
       
        printf("\n");
    }

}