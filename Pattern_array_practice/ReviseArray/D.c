#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,cnt;
    int arr[10],frr[10];

    printf("Enter the arry limit :");
    scanf("%d",&limit);
    printf("Enter the array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            frr[i]=-1;
        }
    
    for(i=0;i<limit;i++)
        {
            cnt=1;
            for(j=i+1;j<limit;j++)
                {
                    if(arr[i]==arr[j])
                        {
                            cnt++;
                            frr[j]=0;

                        }
                }
                if(frr[i]!=0)
                    {
                        frr[i]=cnt;
                    }
        }
    printf("Freqency of array \n");
    for(i=0;i<limit;i++)
        {
            if(frr[i]!=0)
                {
                    printf("Frequency of %d is %d",arr[i],frr[i]);
                }
                printf("\n");
        }

}