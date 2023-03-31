#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,limit ,tem,temp;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Decending order :\n");
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]<arr[j])
            {
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    for(i=0;i<limit/2;i++)
    {
        temp=arr[limit-i-1];
        arr[limit-i-1]=arr[i];
        arr[i]=temp;

    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}