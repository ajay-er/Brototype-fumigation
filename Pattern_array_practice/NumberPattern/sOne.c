#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,p,n=9;
    for(i=1;i<=n;i++)
    {  
        p=1;
        for(s=i;s<=n;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {   if(i==j)
            {
                printf("1 ");
            }
            else
            {
            printf("%d ",p++);
        }
        }
        printf("\n");
    }
}