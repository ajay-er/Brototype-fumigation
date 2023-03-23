#include <stdio.h>

int main(void)
{
    int i,j,arr[10],n,c,k=0,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("sum of unique numbers: %d",sum);


}