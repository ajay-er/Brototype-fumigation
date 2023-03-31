#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit ;
    int arr[10][10];
    printf("Enter the array limit :");
    scanf("%d",&limit);
    printf("Enter the array values : \n");
    for(i=0;i<limit;i++)
        {
            for(j=0;j<limit;j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }
    printf("Matrix is :\n");
    for(i=0;i<limit;i++)
        {   
            for(j=0;j<limit;j++)
                {
                  printf("%d \t",arr[i][j]);
                }
                printf("\n\n");
        }
      printf("\n");
}