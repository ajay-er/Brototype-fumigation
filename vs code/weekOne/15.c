#include <stdio.h>

int main(void)
{
    int i,j,n,arr[10],lim,c;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nupto limit for prime number: ");
    scanf("%d",&lim);

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
        if(c==0 &&  arr[i]<lim && arr[i]!=0 && arr[i]!=1)
        {
            printf("%d ",arr[i]);
        }
    }
}