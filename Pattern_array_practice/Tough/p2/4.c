#include <stdio.h>

int main(void)
{   int arr[10];
    int i,j,limit,sec=-1,lrg=-1;
    printf("Enter array limit: ");
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
        else if(arr[i]>sec && lrg>arr[i])
        {
            sec=arr[i];
        }
        
    }
    printf("Array sec larg : %d",sec);
    


}