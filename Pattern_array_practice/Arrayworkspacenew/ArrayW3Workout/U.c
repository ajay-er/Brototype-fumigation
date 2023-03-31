#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,cnt,sum=0;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("\nUnique elements: ");
    for(i=0;i<limit;i++)
        {   
            cnt=0;
            for(j=0;j<limit;j++)
                {
                    if(i!=j && arr[i]==arr[j])
                        {
                            cnt=1;
                        }
                }
                if(cnt==0)
                {
                    printf("%d ",arr[i]);
                    sum=sum+arr[i];
                }
        }
        printf("\nSum of unique elements: %d",sum);
}