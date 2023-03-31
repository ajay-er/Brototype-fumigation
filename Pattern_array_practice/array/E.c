#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int limit;
    int arr[10];
    int i,j,k;
    int c,cnt,val,n,m;

    printf("enter the limit of array:");
    scanf("%d",&limit);

    printf("enter the values of array:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    val=0;
    for(i=0;i<limit;i++)
    {
        if(arr[i]==0)
        {
            for(n=i;n<limit;n++)
            {
                arr[n]=arr[n+1];
            }
           for(m=limit-1;m>=val;m--)
           {
                arr[m]=arr[m+1];
           }
          arr[val]=0;
           val++;

        }
    }
    for(i=0;i<limit;i++)
    {
        printf("%d",arr[i]);
    }
}