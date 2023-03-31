#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,k ;
    int arr[10];
    int frr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            frr[i]=-1;
        }
    for(i=0;i<limit;i++)
        {   k=1;
            for(j=i+1;j<limit;j++)
            {
                if(arr[i]==arr[j])
                    {
                        k++;
                        frr[j]=0;
                    }
            }
            if(frr[i]!=0)
                {
                    frr[i]=k;
                }
        }
        printf("Freqency of array : \n");
        for(i=0;i<limit;i++)
            {
                if(frr[i]!=0)
                    {
                        printf("%d occures %d times \n ",arr[i],frr[i]);
                    }
            }
}