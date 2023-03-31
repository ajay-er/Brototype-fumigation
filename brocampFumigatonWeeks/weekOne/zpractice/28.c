#include <stdio.h>

int main(void)
{
    int i,j,arr[10],n,k;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            for(j=i+3;j<n;j++)
            {
                arr[i+1]=arr[j];
                arr[i+2]=arr[j+1];
                break;
            }
           n-=2;
        }

    }
    printf("Array ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}