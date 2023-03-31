#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,z=0;
    int arr[10],new[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<limit;i++)
    {   
        if(arr[i]!=0)
        {
            new[z++]=arr[i];
        }
    }
    for(i=z;i<limit;i++)
    {
        new[i]=0;
    }
    printf("\nAfter set zero to end :");
    for(i=0;i<limit;i++)
    {
        printf("%d ",new[i]);
    }
}