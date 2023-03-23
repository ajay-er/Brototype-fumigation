#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n,s=0,arr[10];
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%3==0)
        {
            s=s+arr[i];
        }
    }
    printf("sum: %d",s);
}