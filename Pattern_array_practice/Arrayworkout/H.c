#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,k;
    int arr[10];
    int frq[10];
    printf("Enter  array limit \n");
    scanf("%d",&limit);
    printf("Enter array values");
    for(i=0;i<limit;i++)
        {
        scanf("%d",&arr[i]);
        frq[i]=-1;
        }
        
        //freqency check;
        for(i=0;i<limit;i++)
        {
            k=1;
            for(j=i+1;j<limit;j++)
            {
                if(arr[i]==arr[j])
                {
                    k++;
                    frq[j]=0;
                }

            }
            if(frq[i]!=0)
            {
                frq[i]=k;
            }
        }
        printf("The freqency of array values :\n");
        for(i=0;i<limit;i++)
            {   if(frq[i]!=0)
                {
                printf("%d occures %d times \n",arr[i],frq[i]);
                }
            }
    
    


}