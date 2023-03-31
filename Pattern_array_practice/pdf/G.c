#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Alternative elements:\n");
    for(i=0;i<limit;i+=2)
        {
            printf("%d ",arr[i]);
        }
}