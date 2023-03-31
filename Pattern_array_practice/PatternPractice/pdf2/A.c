#include <stdio.h>

int main(void)
{
    int i,j,n=5,k=1,s;
    for(i=1;i<=n;i++)
    {   
        s=k;
        for(j=1;j<=i;j++)
        {   
            if(s%2==0)
            {
                 printf("$ ");
                 
            }
            else
            {
                          
            printf("* ");
            }
            s++;

        } k++;
        
        printf("\n");
    }
}