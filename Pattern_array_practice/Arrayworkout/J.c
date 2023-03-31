#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,j=0,k=0,limit;
    int arr[10];
    int odd[10];
    int evn[10];

    printf("Enter array limit:\n");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<limit;i++)
        {
            if(arr[i]%2==0)
            {
                evn[j]=arr[i];
                j++;
            }
            if(arr[i]%2!=0)
            {
                odd[k]=arr[i];
                k++;
            }
        }

        printf("Even array \n");
        for(i=0;i<j;i++)
            {
                printf("%d ",evn[i]);
            }
        printf("\nOdd array \n");
        for(i=0;i<k;i++)
            {
                printf("%d ",odd[i]);
            }


}