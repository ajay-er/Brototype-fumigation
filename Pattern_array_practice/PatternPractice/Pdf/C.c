#include <stdio.h>
 
int main(void)
{
    int i,j,n=5,k,p=1,s;
    for(i=1;i<=n;i++)
    {   
        for(k=i;k<=n;k++)
        {
            printf("  ");
        }
        p=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",p++);
           
        }
        p=p-2;
        for(s=1;s<i;s++)
        {    
            
            printf("%d ",p-- );
        }
        printf("\n");
    }
}