#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,temp=0;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sort: ");
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}