#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,temp,ke,pos ;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter your array values\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter the number to insert: ");
    scanf("%d",&ke);
    for(i=0;i<limit;i++)
        {
            for(j=i+1;j<limit;j++)
                {
                    if(arr[i]>arr[j])
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                }
        }
  

   printf("Sorted array :\n");

    for(i=0;i<limit;i++)
        {
            if(ke<arr[i])
            {
                pos=i;
                break;
            }
            else{
                pos=i+1;
            }
            
 
        }
        for(i=limit+1;i>=pos;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[pos]=ke; 

            for(i=0;i<=limit;i++)
                {
                    printf("%d ",arr[i]);
                }
        
}