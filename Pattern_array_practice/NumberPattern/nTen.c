#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,p,n=6;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("2 ");
            }else{
                printf("1 ");
            }

        }
        printf("\n");
    }
}