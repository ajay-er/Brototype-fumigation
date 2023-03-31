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
    printf("Elements closest to zero :");
    for(i=0;i<limit;i++)
        {
            if(arr[i]==0)
            {
                printf("%d ",arr[i+1]);
            }
        }
}