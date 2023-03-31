#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit;
    int arr[10][10];
    int arr1[10][10];
    int sum[10][10];

    printf("Enter the array limit :");
    scanf("%d",&limit);
    printf("Enter the first arry values : \n");
    for(i=0;i<limit;i++)
        {
            for(j=0;j<limit;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
                printf("\n");
        }
    printf("Enter the second array values :\n");
     for(i=0;i<limit;i++)
        {
            for(j=0;j<limit;j++)
                {
                    scanf("%d",&arr1[i][j]);
                }
                printf("\n");
        }
        printf("Sum of arrays : \n");
        for(i=0;i<limit;i++)
            {
                for(j=0;j<limit;j++)
                    {
                        sum[i][j]=arr[i][j]+arr1[i][j];
                    }
            }
        for(i=0;i<limit;i++)
            {
                for(j=0;j<limit;j++)
                    {
                        printf("%d \t", sum[i][j]);
                    }
                    printf("\n");
            }
}