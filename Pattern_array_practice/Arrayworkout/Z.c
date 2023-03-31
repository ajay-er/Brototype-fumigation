#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,rsum[10],csum[10];
    int arr[10][10];
    printf("Enter array limit : ");
    scanf("%d",&limit);
    printf("Enter array volues : \n");
    for(i=0;i<limit;i++)
        {
            for(j=0;j<limit;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    for(i=0;i<limit;i++)
        {   rsum[i]=0;
            for(j=0;j<limit;j++)
                {
                    rsum[i]=rsum[i]+arr[i][j];
                }
            
        }


         for(i=0;i<limit;i++)
        {   
            csum[i]=0;
            for(j=0;j<limit;j++)
                {
                    csum[i]=csum[i]+arr[j][i];
                }
              
        }

        printf("Printing : \n");
        for(i=0;i<limit;i++)
            {
                for(j=0;j<limit;j++)
                    {
                        printf("%4d ",arr[i][j]);
                        
                    }
                    printf("%8d ",rsum[i]);
                    printf("\n");
            }
        printf("\n");
        for(j=0;j<limit;j++)
            {   
                printf("%4d ",csum[j]);
            }
    printf("\n");
    
}