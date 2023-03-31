#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c,k,n;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        c=0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                c=1;
                break;
            }

        }
        if(c==0 && arr[i]!=1 && arr[i]!=0 )
        {
            if(arr[i]>50)
            {
                 for(k=i;k<limit;k++)
               {
                    arr[k]=arr[k+1];
               }
               i--;
               limit--;
            }
           
        }
        else 
        {
            if(arr[i]<50)
            {
               for(k=i;k<limit;k++)
               {
                    arr[k]=arr[k+1];
               }
               i--;
               limit--;
            }
        }

    }
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
}