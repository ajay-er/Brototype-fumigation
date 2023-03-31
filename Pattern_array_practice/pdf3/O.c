#include <stdio.h>

int main(void)
{
    int i,j,n=4,s;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i*2;j++)
        {  
            printf("* ");
             if(j%2==0)
            {
                printf("\n");
            }
          
        }
        if(i==n)
        break;
        for(s=1;s<=5*i;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
}