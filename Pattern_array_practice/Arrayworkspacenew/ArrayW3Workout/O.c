#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,num,p;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values in sorted  \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter a number for insert:");
    scanf("%d",&num);
    for(i=0;i<limit;i++)
        {
            if(num<arr[i])
            {
                p=i;
                break;
            }
            else
            {
                p=i+1;
            }
        }
    for(i=limit+1;i>=p;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[p]=num;
    for(i=0;i<=limit;i++)
        {
            printf("%d ",arr[i]);
        }

}