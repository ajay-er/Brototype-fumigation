#include <stdio.h>
#include<stdlib.h>

int main(void){
    int i,j,p,n=10;
    for(i=1;i<=n;i++)
    {   p=1;
        for(j=1;j<i;j++)
        {
            printf("%d",p++);
        }
         for(j=1;j<=i;j++)
        {
            printf("%d",p--);
        }
        printf("\n");
    }
}