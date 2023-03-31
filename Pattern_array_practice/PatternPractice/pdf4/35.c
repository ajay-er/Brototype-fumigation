#include <stdio.h>

int main(void)
{
    int i,j,n=5,p=1,s;
    for(i=1;i<=n;i++)
    {    s=p;
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
        }
        p++;
       
        printf("\n");
    }
}