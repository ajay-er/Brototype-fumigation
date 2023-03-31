#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,flag ;
    char arr[10];
    printf("Enter the array limit:");
    scanf("%d",&limit);
    printf("Enter the array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }

    printf("Enter values : \n");
    for(i=0;i<limit;i++)
        {
            printf("%d ",arr[i]);
        }
    printf("Replacing prime number with * and deleting even numbers: \n");
    for(i=0;i<limit;i++)
        {   flag=0;
            for(j=2;j<=arr[i]/2;j++)
                {
                    if(arr[i]%j==0)
                        {
                            flag=1;
                            break;
                        }
                }
                if(flag==0 && arr[i]!=2)
                    {
                        arr[i]= "*";
                        printf("%d ",arr[i]);
                    }

        }
}