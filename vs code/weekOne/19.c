#include <stdio.h>

int main(void)
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {   
         for(j=1;j<=i;j++)
        {
           if(j==i)
           printf("X ");
           else
            printf("_ ");
        }
        printf("\n");
        if(i==n)
        break;
        for(j=1;j<=2*i;j++)
        {
            printf("X ");
        }
        printf("\n");
       
    }
}