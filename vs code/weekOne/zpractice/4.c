#include <stdio.h>

int main(void)
{
    int i,j,arr[10],n,sec=-1,lrg=-1;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    lrg=arr[0];
    for(i=0;i<n;i++)
    {   
        if(lrg<arr[i])
        {
            sec=lrg;
            lrg=arr[i];
            
        }
        else if(arr[i]<lrg && arr[i]>sec)
        {
            sec=arr[i];
        }
    }
    printf("Second largest: %d",sec);
}