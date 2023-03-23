#include <stdio.h>

int main(void)
{
    int i,j,n;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
            i=i+2;
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
    }