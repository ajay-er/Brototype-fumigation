#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,temp;
    int arr[10];
    printf("Enter array value : ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
        {
            for(j=i+1;j<limit;j++)
                {
                    if(arr[i]<arr[j])
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                }
        }
        printf("The second large number :%d",arr[1]);
}