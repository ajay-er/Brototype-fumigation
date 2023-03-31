#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,limit,j ;
    int arr[10];
    int temp;
    printf("Enter your array limit: \n");
    scanf("%d",&limit);
    printf("Enter your array values \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }  
    printf("After reverse \n");
    for(i=0;i<limit/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[limit-i-1];
        arr[limit-i-1]=temp;
    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
    
}