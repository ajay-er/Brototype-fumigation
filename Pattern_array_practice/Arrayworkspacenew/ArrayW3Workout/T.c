#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i,j,limit,m,n,p,q,sum[10],sum1;
    int arr[10][10];
    printf("Enter array raw and couloumn limit \n:");
    scanf("%d%d",&m,&n);
    printf("Enter array values\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    printf("Sum of raws and coloumns:\n");
   for(i=0;i<m;i++)
    {   sum[i]=0;
        for(j=0;j<n;j++)
        {   
            printf("%4d  ",arr[i][j]);
            sum[i]=sum[i]+arr[i][j];
        }
        printf("%4d\n",sum[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {   sum1=0;
        for(j=0;j<m;j++)
        {   
            sum1=sum1+arr[j][i];
            
        }
        
        printf("%4d  ",sum1);
    }
    printf("\n\n");
}