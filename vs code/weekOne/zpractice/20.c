#include <stdio.h>

int main(void)
{
    int i,j,arr[10],n;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array valuesz:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   
        if(arr[i]%2==0)
        {
        arr[i]='*';
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]=='*')
        {
            printf("%c ",arr[i]);
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }

}