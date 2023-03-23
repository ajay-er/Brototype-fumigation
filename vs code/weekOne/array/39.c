#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {   
        
        if(i%2==1)
        {   
              for(j=1;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
        

        }
        else
        {
           
            for(j=1;j<=3;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        if(i==n)
        break;
        for(j=1;j<3;j++)
        {
            printf("*\n");
        }
      
    }
}