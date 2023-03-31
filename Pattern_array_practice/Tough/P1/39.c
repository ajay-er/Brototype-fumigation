#include <stdio.h>

int main(void)
{
    int i,j,limit,n,c,k,s,p;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=limit;
    printf("Prime numbers: ");
    for(i=0;i<limit;i++)
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
          s=arr[i];
          for(k=i;k<p;k++)
           {    
                arr[k]=arr[k+1];
           }
           arr[p-1]=s;      
           limit--;
           i--;                   
        } 
    }
    for(i=0;i<p;i++)
    {
        printf("%d ",arr[i]);
    }
}