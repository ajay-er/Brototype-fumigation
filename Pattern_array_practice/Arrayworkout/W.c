#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,m,n;
    int arr[10][10];
    printf("Enter raw count and coloumn count : ");
    scanf("%d\n%d",&m,&n);
    printf("Enter the array values :\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d ",&arr[i][j]);
                }
                printf("\n");
        }
    printf("After transform: \n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    printf("%d ",arr[j][i]);
                }
                printf("\n");
        }
}