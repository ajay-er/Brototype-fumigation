#include <stdio.h>

int main(void)
{
    int i,j,n,arr[10],num;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number for delete : ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            for(j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            i--;
        }
    }
    printf("After : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}