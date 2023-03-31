#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,size,k,flag=0,sizeK;
    int arr[10],sec[10];

    printf("Enter array limit :");
    scanf("%d",&size);
    printf("Enter array values:\n");
    for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("remove multiple of 5 \n");
    for(i=0;i<size;i++)
        {
            flag=0;
            if(arr[i]%5==0)
                {
                    flag=1;
                    arr[i]=-1;
                }      
        }
    for(i=size-1;i>=0;i--)
        {
            if(arr[i]!=-1)
                {
                    printf("%d ",arr[i]);
                }
        }
}