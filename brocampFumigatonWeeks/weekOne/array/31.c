#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],num,pos;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter your number");
    scanf("%d",&num);
    printf("Enter your position");
    scanf("%d",&pos);
    pos=pos-1;
    for(i=n;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}