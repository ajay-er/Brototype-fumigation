#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,sml=9999,sec=9999;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter the array values : \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<limit;i++)
        {
            if(sml>arr[i])
                {
                    sec=sml;
                    sml=arr[i];
                }
                else if(arr[i]!=sml && sec>arr[i])
                {
                    sec=arr[i];
                }
        }
        printf("The small number is : %d\n",sml);
        if(sec!=-1)
            {
                printf("second smallest: %d\n",sec);
            }
        else
            {
                printf("NO second smallest number");
            }


}