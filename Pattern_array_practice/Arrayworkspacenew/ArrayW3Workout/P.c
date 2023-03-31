#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,del,p ;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter the number for deleting:");
    scanf("%d",&del);
    for(i=0;i<limit;i++)
        {
            if(arr[i]==del)
            {
                p=i;
                break;
            }
        }
    for(i=limit-1;i>p;i--)
        {
            arr[i-1]=arr[i];
        }
    for(i=0;i<limit-1;i++)
        {
            printf("%d ",arr[i]);
        }
}