#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,k,l;
    float nsum=0,psum=0;
    float arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%f",&arr[i]);
    }
    printf("Avarage of negative: ");
    for(i=0;i<limit;i++)
    {
        if(arr[i]<0)
        {
            nsum=nsum+arr[i];
            k++;
        }
        else
        {
            psum=psum+arr[i];
            l++;
        }
    }
    nsum=nsum/k;
    psum=psum/l;
    printf("%.2f ",nsum);
    printf("\nAvarage of positive:%.2f ",psum);

}