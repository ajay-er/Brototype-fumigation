#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c,k=0;
    int arr[10];
    printf("Enter array values:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unique numbers:");
    for(i=0;i<limit;i++)
    {
        c=0;
        for(j=0;j<limit;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d ",arr[i]);
            k++;
        }
    }
    printf("\nUnique number count :%d",k);
}