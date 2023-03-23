#include <stdio.h>
#include <stdlib.h>
int findMax();
int main()
{
    int i,j,arr[10],limit,s;
    printf("Enter number limit:");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=findMax(arr,limit);
    printf("Maximum is: %d",s);
}
int findMax(int arr[],int num)
{
    int p,i;
    p=arr[0];
    for(i=0;i<num;i++)
    {
        if(p<arr[i])
        {
            p=arr[i];
        }
    }
   return p;
}