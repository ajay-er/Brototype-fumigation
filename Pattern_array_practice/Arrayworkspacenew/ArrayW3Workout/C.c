#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit ;
    int arr[10],arr2[10];
    printf("Enter array values :");
    scanf("%d",&limit);
    printf("Enter array limit \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            arr2[i]=arr[i];
        }
    printf("second array :\n");
    for(i=0;i<limit;i++)
        {
            printf("%d ",arr2[i]);
        }
    
}