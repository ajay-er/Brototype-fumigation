#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,cnt;
    int arr[10],frr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            frr[i]=-1;
        }
    for(i=0;i<limit;i++)
        {
            
            for(j=i+1;j<limit;j++)
                {
                    if(arr[i]==arr[j])
                        {
                            frr[j]=0;
                            frr[i]=0;
                            
                        }
                }
               
        }
     printf("unique numbers are : \n");             
     if(frr[i]!=0)
     {
        for(i=0;i<limit;i++)
       {
            
               printf("%d ",arr[i]);
             
       }
     }
     else
     {}
       
    
        
}