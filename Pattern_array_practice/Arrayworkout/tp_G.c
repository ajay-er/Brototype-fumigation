#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit ,flag=0;
    int arr[10];
    printf("Enter array limit : ");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("unique elements: \n");
    for(i=0;i<limit;i++)
        {   flag=0;
            for(j=0;j<limit;j++)
                {
                    if(i!=j)
                    {
                    if(arr[i]==arr[j])
                        {
                          flag++;

                        }
                    }
                }
                if(flag==0)
                {
                    printf("%d ",arr[i]);
                }
        }
    
}