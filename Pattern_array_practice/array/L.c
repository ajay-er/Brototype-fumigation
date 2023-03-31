#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,sum=0,c,k;
    int arr[10],frr[10];
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
        c=1;
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]==arr[j])
            {     
                c++;
                frr[j]=0;         
            }
        }
        if(frr[i]!=0)
        {
            frr[i]=c;
        }   
    }
    printf("Unique numbers: ");
    for(i=0;i<limit;i++)
    {
        if(frr[i]==1)
        {
            for(k=i;k<limit;k++)
            {
                arr[k]=arr[k+1];
            }
            limit--;
            i--;
        }
        else if(frr[i]==2)
        {
            sum=sum+arr[i];
        }
    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nDupicate sum:%d",sum);
   
}