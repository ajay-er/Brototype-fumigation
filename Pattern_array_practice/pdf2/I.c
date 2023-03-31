#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,sm,lr;
    int arr[10];
    printf("Enter array values: ");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    sm=arr[0];
    lr=arr[0];
    for(i=0;i<limit;i++)
    {
        if(sm>arr[i])
        {
            sm=arr[i];
        }
    }
    for(j=0;j<limit;j++)
    {
        if(lr<arr[j])
        {
            lr=arr[j];
        }
    }
    printf("Largest number: %d",lr);
    printf("\nSmallest number :%d",sm);
    
}