#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,limit,sum=0,k=0;
    int arr[10],new[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("multiple of 10: ");
    for(i=0;i<limit;i++)
        {
            if(arr[i]%10==0)
                {
                    printf("%d ",arr[i]);
                    new[k]=arr[i];
                    k++;
                    sum=sum+arr[i];
                }
        }
        printf("\nSum of multiple of 10 :%d",sum);
}