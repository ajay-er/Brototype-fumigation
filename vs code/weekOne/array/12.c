#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],num,p;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number for insert: ");
    scanf("%d",&num);
    printf("Enter position for insert element: ");
    scanf("%d",&p);
    for(i=n;i>=p;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[p-1]=num;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}