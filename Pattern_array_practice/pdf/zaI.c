#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,k=0,c;
    int arr[10],frr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
        frr[i]=-1;
    }
    for(i=0;i<limit;i++)
    {
        c=0;
        for(j=i+1;j<limit;j++)
        {
            
            if(arr[i]==arr[j])
            {
               frr[i]=0;
               break;
               c++;
            }
        }
       if(frr[i]!=0)
        {
            frr[i]=c;
        }
    }
   
}