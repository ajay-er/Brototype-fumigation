#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,n,temp,n1;
    int arr[10];
    int sml=9999,lrg=-1;
    printf("Enter array values :");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("\nsmallest number position:");
    scanf("%d",&n);
     printf("\nlargest number position:");
    scanf("%d\n",&n1);
    for(i=0;i<limit;i++)
        {   for(j=i+1;j<limit;j++)
            {
              if(arr[i]>arr[j])
             {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
              }
            }
        }
                printf("%dth smallest number is %d\n",n,arr[n-1]);
                printf("%dth largest number is %d",n1,arr[limit-n1]);
           
}