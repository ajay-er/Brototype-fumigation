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
    printf("After Modification:\n");
    for(i=0;i<limit;i++)
        {
            if(arr[i]%3==0 )
            {
                printf("* ");
            }
            else if(arr[i]%7==0)
            {
                printf("# ");
            }
            else
            {
                printf("%d ",arr[i]);
            }
        }
}