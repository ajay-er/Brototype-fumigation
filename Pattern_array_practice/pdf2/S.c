#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,pos,num,n;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number for insert:");
    scanf("%d",&num);
    printf("Enter a position :");
    scanf("%d",&pos);
    pos=pos-1;
    for(i=limit-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(i=0;i<=limit;i++)
    {
        printf("%d ",arr[i]);
    }
}