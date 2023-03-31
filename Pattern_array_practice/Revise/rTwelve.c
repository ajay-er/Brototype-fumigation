#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s,j,n=5;
    for(i=1;i<n;i++)
    {
        for(s=i;s<=n;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }  for(i=1;i<=n;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
}
}