#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,s,n=5;
    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {    if(j==n){
                break;
            }else{
            printf("* ");}
        }
        for(s=i+2;s<=n;s++)
        {
            printf("  ");
        }for(j=1;j<=i;j++)
        {
           
            printf("* ");
        }
        printf("\n");
        

    }
}