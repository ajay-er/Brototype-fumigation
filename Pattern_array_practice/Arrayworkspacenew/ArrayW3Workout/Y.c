#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,m,n;
    int arr[10][10];
    printf("Enter array raw and coloumn limit :");
    scanf("%d%d",&m,&n);
    printf("Enter array values :\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(i<=j)
                        {
                            printf("%d ",arr[i][j]);
                        }
                    else
                        {
                            printf("0 ");
                        }
                }
                printf("\n");
        }
}