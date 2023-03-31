#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,k=0,limit,ctr=0;
    int arr[10],arr2[10],arr3[10];
    printf("Enter array number \n");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Repeated Number count :");
   
   for(i=0;i<limit;i++)
        {
            arr2[i]=arr[i];
            arr3[i]=0;
        }
   
    for(i=0;i<limit;i++)
        {  
            
        for(j=0;j<limit;j++)

            {
            if(arr[i]==arr2[j])
            {
                arr3[j]=k;
                k++;
            }

            }
            k=1;
              
        }
        for(i=0;i<limit;i++)
            {
                if(arr3[i]==2)
                    {
                        ctr++;
                    }
               
            }
        printf("%d",ctr);

}