#include <stdio.h>

int main(void)
{
    
     int i,j,n=4,s=n+1;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=s;j++)
            {
                printf("X ");
            }printf("\n");
            for(j=1;j<=s-1;j++)
            {
                printf("X ");
            }
            if(i==n)
            break;
            printf("\nX\nX\n");
            s--;
        }
    
}