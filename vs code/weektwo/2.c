#include <stdio.h>
int main()
{
    int i,j,n,a[10],pos;
    printf("Enter Size of An Array");
    scanf("%d",&n);
    printf("Enter Array Elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter your position");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}