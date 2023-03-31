#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,tem;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array valeus:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]>arr[j])
            {
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    printf("Sort: ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }

}