#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,cnt=0,c;
    int arr[10],frr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
        frr[i]=0;
    }
    for(i=0;i<limit;i++)
    {   
        c=1;
        for(j=0;j<limit;j++)
        {
            if(arr[i]==arr[j])
            {   frr[j]=c;
                c++;
            }
        }    
    }
    for(i=0;i<limit;i++)
    {
        if(frr[i]==2)
        {
            cnt++;
        }
    }
    printf("Count of duplicate :%d",cnt);
     
}