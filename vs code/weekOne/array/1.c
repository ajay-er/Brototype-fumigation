#include <stdio.h>

int main(void)
{
    int i,j,n,temp;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array : ");
    for(i=0;i<n/2;i++)
    {   
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}