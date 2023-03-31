#include <stdio.h>

int main(void)
{
    int i,j,limit,p=0,k=0;
    int arr[10],odd[10],evn[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(arr[i]%2==0)
        {
            evn[k]=arr[i];
            k++;
        }
        else
        {
            odd[p]=arr[i];
            p++;
        }
    }
    printf("Odd : ");
    for(i=0;i<p;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\neven: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",evn[i]);
    }
}