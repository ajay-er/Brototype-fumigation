#include <stdio.h>

int main(void)
{
    int i,j,arr[10];
    int n,c;
    printf("Enter array limit: \n");
    scanf("%d",&n);
    printf("Enter array values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("prime  \n");
    for(i=0;i<n;i++)
    {   c=0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0 && arr[i]!=1 && arr[j]!=0)
        {
            printf("%d ",arr[i]);
            i+=2;
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
}