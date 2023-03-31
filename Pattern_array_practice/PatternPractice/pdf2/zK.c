#include <stdio.h>

int main(void)
{
    int i,j,n=6,k,p=4,s=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {   
            if(s%2==0)
            {
                 printf("* ");
            }
        }
        if(s%2!=0)
        {
        for(k=1;k<=p;k++)
        {
            if(k%2==0)
            {
                printf("- ");
            }
            else
            printf("* ");
        }   
         p+=2;       
        }
       
        s++;
        printf("\n");
    }
}