#include <stdio.h>

int main(void)
{   
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        printf("*\n");
    
        for(j=1;j<=3*i;j++)
        {
            printf("* ");
            if(j%3==0)
            {
                printf("\n");
            }
        }
    }
}