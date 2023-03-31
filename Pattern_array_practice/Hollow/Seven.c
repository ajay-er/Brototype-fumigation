#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,k,n=15;
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<i;j++)
        {
            if(j==1||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
          
            
        }
        for(j=1;j<=i;j++)
        {
            if(j==i||i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
          
            
        }
        printf("\n");
        
    }
}
