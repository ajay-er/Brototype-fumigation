#include <stdio.h>

int main(void)
{
    int i,j,arr[10],c=0;
    int n,temp;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   
            if(arr[i]>arr[j])
            {     
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {   if(arr[i]==1)
        {
            c++;
        }
        printf("%d ",arr[i]);
    }
    printf("\ncount of one:%d",c);
}