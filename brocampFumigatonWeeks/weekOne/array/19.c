#include <stdio.h>

int main(void)
{
    int i,j,n,arr[10],temp;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {   
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\n\nreverse: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}