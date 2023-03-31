#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i,j,limit,temp;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<limit/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[limit-1-i];
        arr[limit-1-i]=temp;
    }
    printf("reversed array : ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i] );
    }
}