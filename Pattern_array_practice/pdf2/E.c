#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,sum=0,k=0,c=0;
    int arr[10];
    printf("enter array limit:");
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
            sum=sum+arr[i];
            k++;
        }
        else
        {
            c++;
        }
    }
    printf("\nEven numbers count: %d",k);
    printf("\nOdd numbers count : %d",c);
    printf("\nEven numbers sum: %d",sum);
}