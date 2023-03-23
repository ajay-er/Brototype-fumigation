#include <stdio.h>

int main(void)
{
    int i,j,n,arr[10],brr[10],c[10],k;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter second  array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=arr[i];
    }
    for(j=0;j<n;j++)
    {
        c[i]=brr[j];
        i++;
    }
    printf("Merged :\n");
    for(i=0;i<n*2;i++)
    {
        printf("%d ",c[i]);
    }
}