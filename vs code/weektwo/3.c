#include <stdio.h>

int main(void)
{
    int i,j,n,arr[10],c,sum=0;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unique nmber is: \n");
    for(i=0;i<n;i++)
    {   c=0;
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
           printf("%d ",arr[i]);
        }
    }
   
}