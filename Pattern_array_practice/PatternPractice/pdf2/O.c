#include <stdio.h>

int main(void)
{
    int i,j,k=1,s,n=3,p;
    for(i=1;i<=n;i++)
    {                 
         for(j=1;j<=i;j++)
            {   
                 printf("%d\n",i);
            }
        p=i;
        p++;
         for(s=1;s<=p;s++)
        {
        printf("%d ",k);   
           k++;                
         }
         printf("\n");                   
    }
}