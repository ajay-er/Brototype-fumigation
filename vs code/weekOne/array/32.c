#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],num=0,pos;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            pos=i;
            for(j=pos;j<n;j++)
            {
                arr[j]=arr[j+1];

            }   
            n=n-1;
            i--;
        
        }
       
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}