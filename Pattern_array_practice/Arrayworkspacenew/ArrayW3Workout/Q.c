#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,k,m,n,p,q;
    int arr[10][10],arr2[10][10],new[10][10],sum=0;
    printf("Enter first row and coulumn of array  limit:\n");
    scanf("%d%d",&m,&n);
    printf("Enter array first values \n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
    printf("Enter the second raw and coulmn limit : \n");
    scanf("%d%d",&p,&q);
    printf("Enter array second values \n");
     for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
                {
                    scanf("%d",&arr2[i][j]);
                }
        }
    printf("result of array multiplication:\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
                {
                    sum=0;
                    for(k=0;k<p;k++) 
                        {
                            sum=sum + (arr[i][k])*(arr2[k][j]);
                          
                        }
                         new[i][j]=sum;
                         printf("%d ",new[i][j]);

                }
                printf("\n");
        }

}