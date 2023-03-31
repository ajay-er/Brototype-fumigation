#include <stdio.h>

int main(void)
{
    int i,j,limit,c,sum=0;
    int arr[10];
    printf("Enter array limt:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {   c=0;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c=1;
                break;
                
            }
        }
        if(c==1 || arr[i]==1 || arr[i]==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("Sum of array without prime number : %d",sum);
}