#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,temp;
    char arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter arrray values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[limit-1-i];
        arr[limit-1-i]=temp;
    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
   /*for(i=0;i<limit;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("$ ");
        }
        else
        {
            printf("%d ",arr[i]);
        }
      
    }*/
}