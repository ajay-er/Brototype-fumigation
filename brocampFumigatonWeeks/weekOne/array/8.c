#include <stdio.h>

int main(void)
{
    int i,j,k,n,pos,m;
    int arr[10];
    printf("enter array limit: \n");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number for deleting: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            pos=i;
            for(m=pos;m<n;m++)
            {
                 arr[m]=arr[m+1];   
            }
            i--;
            n--;
        }
    }
    printf("After deleting: \n");
   
    for(i=0;i<n+2;i++)
    {
        printf("%d ",arr[i]);
    }
}