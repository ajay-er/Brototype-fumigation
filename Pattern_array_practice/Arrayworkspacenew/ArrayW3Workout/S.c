#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,sum=0;
    int arr[10][10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {   
            for(j=0;j<limit;j++)
            {
               scanf("%d",&arr[i][j]);
            }
        }
    printf("Sum of right diaoganal:");
    for(i=0;i<limit;i++)
        {
            for(j=0;j<limit;j++)
                {
                    if(i==j)
                        {
                            sum=sum+arr[i][j];
                        }
                        
                }
        }
        printf("%d",sum);
}