#include <stdio.h>

int main(void)
{
    int i,j,limit,sml=9999,ssml=9999;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(sml>arr[i])
        {
            ssml=sml;
            sml=arr[i];
        }
        else if(ssml>arr[i] && sml<arr[i])
        {
            ssml=arr[i];
        }
    }
    printf("\nSec small: %d",ssml);
}