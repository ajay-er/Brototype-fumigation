#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],sum=0;
    float avg;
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
    avg=sum/n;
    printf("avarage: %f ",avg);


}