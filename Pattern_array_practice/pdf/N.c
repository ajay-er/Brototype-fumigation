#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c,sum=0;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter the array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Prime numbers:");
    for(i=0;i<limit;i++)
        {
            c=0;
            if(arr[i]%3==0)
                {
                    sum=sum+arr[i];
                }
            for(j=2;j<=arr[i]/2;j++)
                {
                    if(arr[i]%2 ==0)
                    {
                        c=1;
                        break;
                    }
                }
                if(c==0 && arr[i]!=1 && arr[i]!=0)
                {
                    printf("%d ",arr[i]);
                }
        }
    printf("\nsum of array elements  multiples of 3 :%d",sum);
}