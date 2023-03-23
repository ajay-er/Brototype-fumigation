#include <stdio.h>

int main (void)
{
    int i,j,n,arr[10],c;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicates: \n");
    for(i=0;i<n;i++)
    {   
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=0)
            {
                c++;
                arr[j]=0;
            }
        }
        if(c==2)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}