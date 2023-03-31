#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<limit;i++)
        {
            if(arr[i]%5==0)
                {
                    
                    printf("%d ",arr[i]);
                    if(arr[i+1]%5==0)
                        {
                            printf("%d ",arr[i+1]);
                            i+=3;
                        }
                    else
                        {
                            i+=2;
                        }

                }
            else
                {
                        printf("%d ",arr[i]);
                }
        }
}