#include <stdio.h>

int main (void)
{
  int i,j,n,arr[10],num,p=0;
   
    printf("Enter array limit; ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter array value to insert : ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(num<arr[i])
        {
            p=i;
            break;
        }
        else{
            p=n;
        }
    }
    for(i=n-1;i>=p;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[p]=num;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}