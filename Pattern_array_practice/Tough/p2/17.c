#include <stdio.h>

int main(void)
{
    int i,j,limit,p,n;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values:\n");

    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a positon : ");
    scanf("%d",&p);
    printf("Enter a number to insert: ");
    scanf("%d",&n);
    p=p-1;
    for(i=limit-1;i>=p;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[p]=n;
    for(i=0;i<=limit;i++)
    {
        printf("%d ",arr[i]);
    }

}