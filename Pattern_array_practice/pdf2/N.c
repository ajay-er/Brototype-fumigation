#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Two repeating elements:\n");
    for(i=0;i<limit;i++)
    {   c=0;
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]==arr[j])
            {
                c=1;  
                arr[j]=-1;
            }
        }
        if(c==1 && arr[i]!=-1)
        {
            printf("%d ",arr[i]);
        }
    }
}