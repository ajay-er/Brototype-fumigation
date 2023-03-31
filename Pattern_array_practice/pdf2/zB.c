#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c,cnt=0;
    int arr[10],frr[10];
    printf("enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {   c=0;
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                arr[j]=-1;
                c=1;
            }
        }
        if(c==1)
        {
            printf("%d ",arr[i]);
            cnt++;
        }
    }
   
}