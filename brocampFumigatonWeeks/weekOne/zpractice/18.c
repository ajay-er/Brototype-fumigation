#include <stdio.h>

int main(void)
{
    int i,j,arr[10],n,k,temp;
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
            for(j=i;j<n;j++)
            {
                    arr[j]=arr[j+1];
            }n--;
            i--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}