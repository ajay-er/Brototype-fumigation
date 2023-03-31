#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,arr[10],frr[10],c;
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array valeus:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
        frr[i]=-1;
    }
    printf("Reapeating elements: ");
    for(i=0;i<limit;i++)
    {    c=1;
        for(j=i+1;j<limit;j++)
        {   
            if( arr[i]==arr[j] )
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
    for(i=0;i<limit;i++)
    {
        if(frr[i]>1)
        {
            printf("%d ",arr[i]);
        }
    }

}