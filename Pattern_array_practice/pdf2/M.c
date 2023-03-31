#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,lrg=-1,sec;
    int arr[10];
    printf("Enter array limit " );
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<limit;i++)
    {
        if(lrg<arr[i])
        {
            sec=lrg;
            lrg=arr[i];
        }
        else if(arr[i]<lrg && sec<arr[i])
        {
            sec=arr[i];
        }
        
    }
    printf("Secend largest:%d",sec);

}