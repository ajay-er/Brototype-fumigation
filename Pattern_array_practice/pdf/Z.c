#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,limit,k=0,sum=0;
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
        if(arr[i]<0)
        {
            k++;
        }
        else
        {
            sum=sum+arr[i];
        }
    }
    printf("Total number of negative numbers:%d\n",k);
    printf("Sum of positive numbers:%d",sum);
}