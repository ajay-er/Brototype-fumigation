#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit;
    int arr1[10],arr2[10],temp;
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Array after swap:\n");
    printf("Array one: ");
    for(i=0;i<limit;i++)
    {   
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
        
        printf("%d ",arr1[i]);
    }
    printf("\nArray two: ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr2[i]);
    }  
}