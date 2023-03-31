#include <stdio.h>

int main(void)
{
    int i,j,limit,c,k=0,sum=0;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array valeus: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unique elements: ");
    for(i=0;i<limit;i++)
    {   c=0;
        for(j=0;j<limit;j++)
        {
            if(arr[i]==arr[j] &&i!=j)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {   
            sum=sum+arr[i];
            k++;
        }
        
    }
    printf("Count of unique element: %d ",k);
    printf("\nSum: %d",sum);
}