#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int limit;
    int arr[10];
    int i,j,k;
    int c,cnt,val,n;

    printf("enter the limit of array:");
    scanf("%d",&limit);

    printf("enter the values of array:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
     val=-1;
    for(i=0;i<limit;i++)
    {
        c=0;
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt=1;
                c++;

            }
        }
        if( c>val  )
            {
                val=c;
                n=arr[i];
            }
    }
    printf("%d",n);
}