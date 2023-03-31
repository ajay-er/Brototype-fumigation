#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,mx,mn;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter the array values \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    mn=arr[0];
    mx=arr[0];
    for(i=0;i<limit;i++)
        {
            if(mx<arr[i])
                {
                    mx=arr[i];
                }
            if(mn>arr[i])
                {
                    mn=arr[i];
                }
        }
    printf("minimum :%d\n",mn);
    printf("maximum :%d",mx);
}