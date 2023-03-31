#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, limit,sum=0;
    int arr[10];
    printf("Enter array limit \n");
    scanf("%d", &limit);
    printf("Enter array values \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("sum \n");
    for(i=0;i<limit;i++)
        {
            sum=sum+arr[i];
        }
    printf("%d",sum);
}