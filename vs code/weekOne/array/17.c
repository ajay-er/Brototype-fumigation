#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10];
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%5==0)
        {
            for(j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}