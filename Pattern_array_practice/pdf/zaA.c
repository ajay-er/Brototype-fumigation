#include<stdio.h>
#include <stdlib.h>

int main (void)
{
    int i,j,limit;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}