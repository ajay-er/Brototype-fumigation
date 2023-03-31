#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,n,m;
    int arr[10][10];
    printf("Enter the array raw and coulmn limit :");
    scanf("%d%d",&m,&n);
    printf("Enter the array values:\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
              scanf("%d",&arr[i][j]);
            }
        }
    printf("After transpose:\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
}