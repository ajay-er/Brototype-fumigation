#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],b[10];
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=arr[i];
    }
    printf("Array b is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}