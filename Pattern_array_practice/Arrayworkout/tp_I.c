#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,pos;
    int arr[10];
    printf("Enter the array value :");
    scanf("%d",&limit);
    printf("Enter the array values: \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter the position you want to remove : ");
    scanf("%d",&pos);
    pos=pos-1;
    for(i=pos;i<limit;i++)
        {
            arr[pos]=arr[pos+1];
        }
    printf("After remove");
    for(i=0;i<limit-1;i++)
        {
            printf("%d ",arr[i]);
        }

}