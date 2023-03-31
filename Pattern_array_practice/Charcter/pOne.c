#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i,j,s,n=5,p;
    for(i=1;i<=n;i++)
    {   
        p=65;
        for(s=i;s<=n;s++)
        {
            printf("  ");
        }
        for(j=1;j<i;j++)
        {
            printf("%c ",p++);
        }
         for(j=1;j<=i;j++)
        {
            printf("%c ",p--);
        }
        printf("\n");
        


    }
}