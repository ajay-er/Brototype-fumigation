#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],k=0,p=0,sum=0;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            k++;
            sum=sum+arr[i];
        }
        else
        {
            p++;
        }
    }
    printf("\nCount of odd numbers: %d",p);
    printf("\nCount of evn numbers: %d",k);
    printf("\nsum of evn numbers: %d",sum);
}