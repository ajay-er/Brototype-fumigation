#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],c,k;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
        if(c==0 && arr[i]!=0 && arr[i]!=1)
        {
            for(k=i;k<n;k++)
            {
                arr[k]=arr[k+1];
            }
            n--;
            i--;
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}