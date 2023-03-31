#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit;
    int arr[10][10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {
            for(j=0;j<limit;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    for(i=0;i<limit;i++)
        {
            for(j=0;j<limit;j++)
                {
                    if(j<=i)
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