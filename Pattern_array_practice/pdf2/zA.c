#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c,cnt=0;
    int arr[10],frr[10];
    printf("enter array limit: ");
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
            {
                frr[j]=c;
                c++;
            }
        }
    }
    printf("duplicates: \n");
    for(i=0;i<limit;i++)
    {
        if(frr[i]==2)
        {
            cnt++;
            printf("%d ",arr[i]);
        }
    }
    printf("\nCount of duplicate :%d",cnt);
}