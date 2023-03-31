#include <stdio.h>

int main(void)
{
    int i,j,k,n=4,p=2,c=3;
    for(i=1;i<=n;i++)
    {
       for(k=1;k<=p;k++)
       {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
       }
       for(j=1;j<=c;j++)
       {
            if(j%2==0)
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
            }
       }
       c+=3;
       printf("\n");
        
    }
}