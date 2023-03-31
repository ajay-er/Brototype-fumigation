#include <stdio.h>

int main(void)
{
    int i,j,n,arr[10],sec=0,lrg;
     printf("Enter array limit : ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    lrg=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>lrg)
        {
            sec=lrg;
            lrg=arr[i];
        }
        else if(arr[i]>sec && arr[i]<lrg)
        {
            sec=arr[i];
        }
       
    }

    printf("Second larg: %d",sec);

}