#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,k=0,n=0;
    int arr[10],evn[10],odd[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<limit;i++)
        {
            if(arr[i]%2==0)
                {
                    evn[k]=arr[i];
                    k++;
                }
            else
                {
                    odd[n]=arr[i];
                    n++;
                }
        }
        printf("Even array values: ");
        for(i=0;i<k;i++)
            {
                printf("%d ",evn[i]);
            }
        printf("\nOdd values: ");
        for(i=0;i<n;i++)
            {
                printf("%d ",odd[i]);
            }
        
}