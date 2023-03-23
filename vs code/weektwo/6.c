#include <stdio.h>

int main(void)
{
    int i,j,n,c,arr[10];
    printf("Enter array limit : ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {   
            
            if(i==n-2)
           {
               n= n-1;
           }
           else if(i==n-1)
           {
            n=n;
           }
           else{
            c=i+1;
            for(j=c;j<n;j++)
            {
                arr[j]=arr[j+2];
                arr[j+1]=arr[j+3];   
            }n=n-2;
           }
           
            
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}