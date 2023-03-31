#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit ,c,k=0,sum=0;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<limit;i++)
        {
            c=0;
            for(j=0;j<limit;j++)
                {
                    if(arr[i]==arr[j] && i!=j)
                        {
                            c++;
                        }
                }
                if(c==0)
                {
                    k++;
                    sum=sum+arr[i];
                }
        }
        printf("\n%d unique elements",k);
        printf("\nsum of unique elements: %d",sum);
    
}