#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    int i,j,limit,num,p;
    int arr[10];

    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);

        }
    printf("Enter a number for insert :");
    scanf("%d",&num);
    printf("Enter the position for the inserted number :\n");
    scanf("%d",&p);

    for(i=limit+1;i>=p;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[p-1]=num;
    
    printf("After the insert \n");
    for(i=0;i<=limit;i++)
        {
            printf("%d ",arr[i]);
        }
}