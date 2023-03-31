#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,pos,n;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<limit;i++)
      {
    for(j=0;j<limit;j++)
    {
        if(arr[i]==arr[j] && i!=j)
        {   
            arr[j]=-1;      
        }
    }
    if(arr[i]!=-1)
    {
        printf("%d ",arr[i]);
    }
  }
}