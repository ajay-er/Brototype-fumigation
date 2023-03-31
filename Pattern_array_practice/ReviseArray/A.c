#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,size,k,flag;
    int arr[10];
    printf("Enter array size :");
    scanf("%d",&size);
    printf("Enter array values :\n");

    for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("After deleting prime number :\n");
    for(i=0;i<size;i++)
        {
            flag=0;
            for(j=2;j<=arr[i]/2;j++)
                {
                        if(arr[i]%j==0)
                        {
                           flag=1;
                           break;
                        }  
               
                }
                        if(flag==1)
                        {
                         printf("%d ",arr[i]);
                        }
        }    

}