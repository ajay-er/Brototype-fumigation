#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,limit,sum=0;
    int arr[10];
    printf("Enter your array limit : ");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<limit;i++)
        {
            sum=sum+arr[i];
        }
    printf("sum of array :%d \n",sum);
    
        
        
}