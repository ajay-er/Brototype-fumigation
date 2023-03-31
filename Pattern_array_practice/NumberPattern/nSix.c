#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i,j,s,n=5,p;
   for(i=1,p=0;i<=n;i++,p+=2)
    {
      
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
        }printf("\n");
}
}