#include <stdio.h>

int main(void)
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
    for(i=0;i<limit/2;i++)
    {   
        temp=arr[i];
        arr[i]=arr[limit-i-1];
        arr[limit-i-1]=temp;
    }
    printf("Reverse: ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<limit;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("* ");
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }

}