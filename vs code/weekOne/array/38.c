#include <stdio.h>

int main(void)
{
    int i,j,n,arr[10],odd,l,c=0;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=n;
    for(i=0;i<n;i++)
    {  
        if(arr[i]%2==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        for(i=0;i<n;i++)
         {
        if(arr[i]%2!=0)
        {   
            odd=arr[i];
            for(j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[n-1]=odd;
            i--;
            n--;
        }
        }
    }
    else
    {
        printf("No evn numbers: \n");
        for(i=0;i<l;i++)
         {
        printf("%d ",arr[i]);
         }
    }
    
    printf("\nAfter \n");
    for(i=0;i<l;i++)
    {
        printf("%d ",arr[i]);
    }
}