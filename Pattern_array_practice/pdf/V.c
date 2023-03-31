#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,k=0,temp;
    int arr[10],frr[10],rvr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
        frr[i]=-1;
    }
    for(i=0;i<limit;i++)
    {
        
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]==arr[j])
            {
                frr[j]=0;
            }
        }
        if(frr[i]!=0)
        {
            printf("%d ",arr[i]);
            rvr[k]=arr[i];
            k++;
        }

    }
    for(i=0;i<k/2;i++)
    {
        temp=rvr[i];
        rvr[i]=rvr[k-i-1];
        rvr[k-i-1]=temp;
    }printf("\nReverse:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",rvr[i]);
    }

}