#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,m,n,sum=0;
    int arr[10][10];
    printf("enter the raw and coloumn : ");
    scanf("%d \n%d",&m,&n);
    /*This is only works for square matrixes */
    printf("Enter the array values :\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
                printf("\n");
        }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(i==j)
                        {
                            sum=sum+arr[i][j];
                        }
                }
        }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
        }
       
       printf("sum of right dioganal array is :%d",sum);
          
}