#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,sec=9999,sml=9999 ;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)   
    {
        if(sml>arr[i])
            {
                sec=sml;
                sml=arr[i];
            }
        else if (arr[i]<sec && arr[i]>sml)
            {
                sec=arr[i];
            }
    }
    printf("Second smallest element :%d",sec);


}