#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],sum=0;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of array:%d",sum);
}