#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,limit,mx,mn;
    int arr[10];

    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values : \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);

        }
    mn=arr[0];
    mx=arr[0];
    for(i=0;i<limit;i++)
        {
            if(arr[i]<mn)
            {
                mn=arr[i];
            }
            if(arr[i]>mx)
            {
                mx=arr[i];
            }
        }
    printf("maximum number :%d \n",mx);
    printf("minimum number:%d \n",mn);
}