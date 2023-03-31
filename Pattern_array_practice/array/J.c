#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,n=0,m=0;
    float arr[10],sum=0,Nsum=0,avg1=0,avg2=0;
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(arr[i]<0)
        {
            sum=sum+arr[i];
            n++;
        }
        else
        {
            Nsum=Nsum+arr[i];
            m++;
        }
    }
    avg1=sum/n;
    avg2=Nsum/m;
    printf("Negative avarge: %.2f",avg1);
    printf("\npositive avarge: %.2f",avg2);

}