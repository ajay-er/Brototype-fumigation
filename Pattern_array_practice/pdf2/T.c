#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c=0;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negative elements:\n");
    for(i=0;i<limit;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    printf("\nCount of negative number : %d ",c);
}