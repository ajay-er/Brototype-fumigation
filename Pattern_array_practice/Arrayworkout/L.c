#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,temp,num,pos;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter the number you want insert\n");
    scanf("%d",&num);
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
    for(i=0;i<limit;i++)
        {
            if(num<arr[i])
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

        arr[pos]=num;

        printf("sorted array\n");
        for(i=0;i<=limit;i++)
            {
                printf("%d ",arr[i]);
            }

}