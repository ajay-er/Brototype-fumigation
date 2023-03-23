#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<n*2;j++)
        {
            if(i==j || i+j==n*2)
            {   
                if(i>n )
                {
                    printf("%d",n*2-i);
                }
                else
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}