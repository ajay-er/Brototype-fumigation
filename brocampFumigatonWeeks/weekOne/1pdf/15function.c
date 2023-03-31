#include <stdio.h>
#include <stdlib.h>
int getArray()
{
    int i,limit;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int displayArray()
{
    int i,limit;
    int arr[10];
    printf("values of array : ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    getArray();
    displayArray();
    return 0;
}
