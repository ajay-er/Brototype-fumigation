#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],c,sum=0,m;
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
        {   m=0;
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    m=1;
                    break;
                }
            }
            if(m==0)
            {
                sum=sum+arr[i];
            }
        }
    }
    printf("Sum is : %d",sum);
}