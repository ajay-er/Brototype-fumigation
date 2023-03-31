#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,limit,k=0;
    int arr[10],new[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=limit-1;
    for(i=limit-1;i>=0;i--)
    {
        if(arr[i]!=0)
        {
            new[k]=arr[i];
            k--;
        }
    }
    for(i=k;i>=0;i--)
    {
        new[i]=0;
    }
    printf("zero to Beggining: ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",new[i]);
    }
    

}