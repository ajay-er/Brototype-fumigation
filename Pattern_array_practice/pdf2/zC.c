#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit=6;
    int arr[]={0,0,0,0,0,0};
    int crr[]={5,6,7};
  

    for(i=0;i<limit;i++)
    {
        arr[i]=crr[i];
    }
     for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i] );   
    }
}