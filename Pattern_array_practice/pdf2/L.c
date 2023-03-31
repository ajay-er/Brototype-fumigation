#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,pos;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter positon for delete: ");
    scanf("%d",&pos);
    pos=pos-1;
    
        for(j=pos;j<limit;j++)
        {
            arr[j]=arr[j+1];
        }
        for(i=0;i<limit-1;i++)
        {
            printf("%d ",arr[i]);
        }
    
}