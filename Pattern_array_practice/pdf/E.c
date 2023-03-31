#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,lrg=-1,sec=-1;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=limit-1;i>=0;i--)
        {
            printf("%d ",arr[i]);
        }    
    for(i=0;i<limit;i++)
        {
            if(lrg<arr[i])
                {
                    sec=lrg;
                    lrg=arr[i];
                }
            else if(lrg>arr[i] && arr[i]>sec)
                {
                    sec=arr[i];
                }
                
        }
    printf("\nSecond largest number :%d",sec);

}