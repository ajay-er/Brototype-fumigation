#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,sum=0;
    for(i=100;i<=200;i++)
    {
        if(i%9==0)
        {

            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nsum:%d",sum);
}