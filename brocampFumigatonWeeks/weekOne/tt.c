#include <stdio.h>

int main(void)
{
    int i,j,arr[10],frr[10],c,n;
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        frr[i]=0;
    }
    for(i=0;i<n;i++)
    {   c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j )
            {
                c++;
                frr[j]=-1;
            }
        }
        if(frr[i]!=0)
        {
            frr[i]=c;
        }
    }
    printf("repeated: ");
     for(i=0;i<n;i++)
    {
        if(frr[i]==2)
        {
            printf("%d ",arr[i]);
        }
    }
    

}