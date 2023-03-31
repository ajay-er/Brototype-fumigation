#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,limit,k,m;
    int  arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
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
             limit--;
             j--;
            }
            
        }
    }
    printf("Remove duplicate :\n");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}