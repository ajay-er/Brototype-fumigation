#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int limit;
    int arr[10];
    int i,j,k;

    printf("enter the limit of array:");
    scanf("%d",&limit);

    printf("enter the values of array:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<limit;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                limit--;
            }
        }
    }
    printf("final array:\n");
    for(i=0;i<limit;i++)
    {
        printf("%d\n",arr[i]);
    }
}