#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,limit,arr[10];
    printf("Enter your array limit");
    scanf("%d",&limit);
    printf("Enter your array values");
    printf("\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your array values are: \n");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}