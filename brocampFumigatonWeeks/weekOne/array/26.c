#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],num,k=0;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a num: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==num )
            {
                printf("%d + %d = %d\n",arr[i],arr[j],num);
                k++;
            }
            
        }

    }
    if(k==0)
    {
        printf("no match");
    }
}