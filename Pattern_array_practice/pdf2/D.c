#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,one,two,k,tem;
    int arr1[10],arr2[10],mrg[10];
    printf("Enter first array limit:");
    scanf("%d",&one);
    printf("Enter first array values:\n");
    for(i=0;i<one;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array limit:");
    scanf("%d",&two);
    printf("Enter second array values:\n");
    for(i=0;i<two;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<one;i++)
    {
        mrg[i]=arr1[i];
    }
    k=i;
    for(j=0;j<two;j++)
    {
        mrg[k]=arr2[j];
        k++;
    }
    //sorting
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(mrg[i]<mrg[j])
            {
                tem=mrg[i];
                mrg[i]=mrg[j];
                mrg[j]=tem;
            }
        }
    }
    printf("Array after merging: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",mrg[i]);
    }


    
}