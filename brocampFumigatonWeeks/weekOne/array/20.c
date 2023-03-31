#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],frr[10],c;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        frr[i]=-1;
    }
    //duplicate
    for(i=0;i<n;i++)
    {   c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                frr[j]=0;
            }
        }
        if(frr[i]!=0)
        {
            frr[i]=c;
        }
    }
    printf("duplicate: ");
    for(i=0;i<n;i++)
    {
        if(frr[i]>0)
        {
            printf("%d ",arr[i]);
        }
    }
}