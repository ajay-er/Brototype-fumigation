#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,sum=0;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    
    for(i=0;i<limit;i++)
        {
            if(arr[i]%4!=0)
            {
                sum=sum+arr[i];
            }
        }
    printf("Sum:%d",sum);
}