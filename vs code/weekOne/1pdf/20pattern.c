#include <stdio.h>

int main(void)
{
    int i,j,n=3,p=1;
    for(i=1;i<n*2;i++)
    {
        
        for(j=1;j<n*2;j++)
        {
            if(i+j<=4 || j-i>=2 || j-i<=-2 || j+i>=8)
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