#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,n=6,s,p;
    for(i=1;i<=n;i++)
    {   
        p=1;
        for(s=i;s<=n;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            
        {   if(j==i&&j!=1)
            {
                printf("1");
                break;
            }
            else{
            printf("%d ",p++);
            }
        }
        printf("\n");
    }
}