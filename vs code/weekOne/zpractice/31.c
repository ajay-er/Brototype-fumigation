#include <stdio.h>

int main(void)
{
    int i,j,n,sec=-1,lrg=-1;
    int arr[10];
    printf("Enter array values: ");
    for(i=0;i<10;i++)

{
    scanf("%d",&arr[i]);
}
    for(i=0;i<10;i++)
    {
        if(lrg<arr[i])
        {
            sec=lrg;
            lrg=arr[i];
        }
        else if(arr[i]>sec && arr[i] <lrg)
        {
            sec=arr[i];
        }
    }
    printf("\nsecond largest: %d",sec);
}