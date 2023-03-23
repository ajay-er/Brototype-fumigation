#include <stdio.h>

int main(void)
{
    int i,j,n,c,arr[10],frr[10];
    printf("Enter array limit: ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        frr[i]=-1;
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   
        c=1;
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
    printf("Frequency of array : \n");
    for(i=0;i<n;i++)
    { 
        if(frr[i]!=0)
        {
            printf("%d is frrequency of %d\n",frr[i],arr[i]);
        }
    }

}