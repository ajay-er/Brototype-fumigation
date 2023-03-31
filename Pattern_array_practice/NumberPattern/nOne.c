#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n=5,p;
    for(i=1,p=1;i<=n;i++,p++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
        }
        printf("\n");
    }

}