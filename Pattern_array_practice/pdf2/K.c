#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,pos,num;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array value:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number for insert:");
    scanf("%d",&num);
    printf("Enter a position: ");
    scanf("%d",&pos);
    pos=pos-1;
     for(j=limit;j>=pos;j--)
        {
            arr[j+1]=arr[j];     
        }
        arr[pos]=num;
    
    for(i=0;i<=limit;i++)
    {
        printf("%d ",arr[i] );
    }
}