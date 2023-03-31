#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,cnt=0,k=1;
    int arr[10],arr3[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            arr3[i]=0;
        }

    for(i=0;i<limit;i++)
        { 
              k=1;
            for(j=0;j<limit;j++)
                {
                    if(arr[i]==arr[j])
                        {
                            arr3[j]=k;
                            k++;
                        }
                }
        }
        for(i=0;i<limit;i++)
            {
                 if(arr3[i]==2)
               {
                 cnt++;
               }
            }
        printf("Count of duplicate :%d",cnt);
       
    
}