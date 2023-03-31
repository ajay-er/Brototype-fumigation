#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit;
    int arr1[10][10],arr2[10][10],sum[10][10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter first  array values: \n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            scanf("%d",&arr1[i][j]);  
        }
    }
     printf("Enter second  array values: \n");

    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            scanf("%d",&arr2[i][j]);  
        }
    }
    printf("first array\n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            printf("%d ",arr1[i][j]);    
        }
        printf("\n");
    }
    printf("\nsecond  array\n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            printf("%d ",arr2[i][j]);    
        }
        printf("\n");
    }
    printf("\nsum of array\n");
    for(i=0;i<limit;i++)
    {
        for(j=0;j<limit;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
}