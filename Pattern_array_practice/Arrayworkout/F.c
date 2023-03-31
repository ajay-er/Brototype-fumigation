#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k,limit;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Unique numbers are: ");
    for(i=0;i<limit;i++)
        {
            k=0;
            for(j=0;j<limit;j++)
            {
                if(i!=j)
                {
                 if(arr[i]==arr[j])
                {
                 k++;
                }
                }

               
            }
            if(k==0)
            {
                printf("%d ",arr[i]);
            }
            
        }
}