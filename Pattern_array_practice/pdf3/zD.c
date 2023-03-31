#include <stdio.h>

int main(void)
{
    int i,j,k,len,one,two,temp;
    int arr1[10],arr2[10],arr3[10];
    printf("Enter first array limit: ");
    scanf("%d",&one);
     printf("Enter first array values: ");
    for(i=0;i<one;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Second array limit: ");
    scanf("%d",&two);
     printf("Enter 2nd array values: ");
     for(i=0;i<two;i++)
    {
        scanf("%d",&arr2[i]);
    }
    len=one+two;
    for(i=0;i<one;i++)
    {
        for(j=i+1;j<one;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(i=0;i<two;i++)
    {
        for(j=i+1;j<two;j++)
        {
            if(arr2[i]>arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
   
    for(i=0,j=0,k=0;k<len;)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    printf("After sorting:\n");
    for(i=0;i<len;i++)
    {
        printf("%d ",arr3[i]);
    }
   
}