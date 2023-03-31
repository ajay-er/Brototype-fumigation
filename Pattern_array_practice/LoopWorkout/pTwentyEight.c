#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum,srt,end,i,j;
    printf("Enter minimum and maximum values \n");
    scanf("%d%d",&srt,&end);
    for(i=srt;i<=end;i++)
    {
         sum=0;
        for(j=1;j<=i/2;j++)
        {
                if(i%j==0)
                {
                   sum=sum+j;
                }
        } 
        if(sum==i)
        {
            printf("%d ",i);
        }
     }  

     return 0;    
}