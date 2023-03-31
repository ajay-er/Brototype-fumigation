#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,mn,mx;
    int arr[10];
    printf("Enter array limit : ");
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
            if(mn>arr[i])
                {
                    mn=arr[i];
                }
            if(mx<arr[i])
                {
                    mx=arr[i];
                }
        }
        printf("maximum: %d\n",mx);
        printf("Minimum: %d",mn);
}