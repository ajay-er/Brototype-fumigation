#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c=0;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array limits :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Unique Elements :\n");
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
                        printf("%d ",arr[i]);
                    }
                    
        }
}