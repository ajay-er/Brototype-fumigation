#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int limit;
    int arr[10];
    int i,j,k;

    printf("enter the limit of array:");
    scanf("%d",&limit);

    printf("enter the values of array:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("closest elements of zeros:\n");
    for(i=0;i<limit;i++)
    {
        if(arr[i]==0 && i+1<limit)
        {
            printf("%d\n",arr[i+1]);
        }
    }
}