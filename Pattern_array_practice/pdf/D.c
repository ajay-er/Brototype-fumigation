#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,temp ;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("After alteration:\n");

    for(i=0;i<limit;i++)
        {
            for(j=i+1;j<limit;j++)
                {
                    if(arr[i]<arr[j])
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                }
        }
    for(i=0;i<limit;i++)
        {
            if(arr[i]%2==0)
            {
                printf("$ ");
            }
            else 
            {
                printf("%d ",arr[i]);
            }
        }
}