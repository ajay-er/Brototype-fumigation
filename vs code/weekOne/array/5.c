#include <stdio.h>
int main(void)
{
    int i,j,n,f;
    int arr[10];
    printf("Enter array limt : ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("unique elements: ");
    for(i=0;i<n;i++)
    {   f=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d ",arr[i]);
        }
    }
}