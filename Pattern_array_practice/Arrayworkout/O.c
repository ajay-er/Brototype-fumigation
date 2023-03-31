#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,limit,num,p;
    int arr[10];

    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array value :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    
    printf("Enter the number for remove: ");
    scanf("%d",&num);
    for(i=0;i<limit;i++)
        {
            if(num==arr[i])
            {
                p=i;
            }
        }
    for(i=p;i<limit;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("After remove :\n");
        for(i=0;i<limit-1;i++)
        {
            printf("%d ",arr[i]);
        }

}