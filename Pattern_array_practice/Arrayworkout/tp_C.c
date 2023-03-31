#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j=0,limit,k=0;
    int arr[10],evn[10],odd[10];

    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array value : \n");
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
            else 
                {
                    odd[k]=arr[i];
                    k++;
                }
        }
        printf("Even array: \n");
        for(i=0;i<j;i++)
            {   
                
                printf("%d \n",evn[i]);
                
            }
        printf("odd array: \n");
        for(i=0;i<k;i++)
            {   
               
                printf("%d ",odd[i]);
                
            }
        
}