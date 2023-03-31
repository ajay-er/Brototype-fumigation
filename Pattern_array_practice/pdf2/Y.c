#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit;
    float sum=0,avg;
    float arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/limit;
    printf("Avarage :%.2f",avg);
}