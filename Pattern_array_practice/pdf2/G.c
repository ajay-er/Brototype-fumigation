#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n,p,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       
        for(j=i;j<=n;j++)
        {
           printf(" "); 
           if(j==i)
           {
            printf("^ ");
           }         
        }
        for(k=1;k<2*i;k++)
        {      
           printf("*");
        }
         for(p=i;p<=n;p++)
        {
           printf(" "); 
           if(p==n)
           {
            printf("^");
           }         
        }
        
        printf("\n");
    }
   
}