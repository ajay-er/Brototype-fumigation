#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,s,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)

        {
            printf(" ");
        }
        for(s=1;s<=i;s++)
        {
            if(s==n)
            {
                break;
            }
            else
            {
            
            printf("* ");
            }
        }for(j=i;j<=n-2;j++)
        {
            printf("  ");
        }
        

        
        for(s=1;s<=i;s++)
        {
            printf("* ");
        }
        


        printf("\n");
    } 
}