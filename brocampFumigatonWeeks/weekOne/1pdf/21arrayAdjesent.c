#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j=0,limit;
    int arr[10],new[10];
    printf("Enter array limit : ");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("After multiple adjesent: ");
    for(i=0;i<limit-1;i++)
    {
        new[j]=arr[i]*arr[i+1];
        j++;
    }
    for(i=0;i<j;i++)
    {
        printf("%d  ",new[i]);
    }
}