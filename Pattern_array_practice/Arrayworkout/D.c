#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,limit;
    int arr[10];
    int arr1[10];
    printf("Enter your array limit \n");
    scanf("%d",&limit);
    printf("Enter your array values \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("After swap \n");
    for(i=0;i<limit;i++)
        {
            arr1[i]=arr[i];
        }
    for(i=0;i<limit;i++)
        {
            printf("%d ",arr1[i]);
        }

}