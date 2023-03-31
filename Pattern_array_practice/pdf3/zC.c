#include <stdio.h>

int main(void)
{
    int i,j,k,n1,n2,n3,temp;
    int arr1[10],arr2[10],arr3[10];
    printf("Enter 1st array limit: ");
    scanf("%d",&n1);
    printf("Enter array valeus:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 2nd array limit:");
    scanf("%d",&n2);
    printf("Enter 2nd array valeus:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
     n3=n1+n2;
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(arr2[i]>arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    i=j=0;
    for(k=0;k<n3;k++)
    {
        if(i<n1 && j<n2)
        {
            if(arr1[i]< arr2[j])
            {
                arr3[k]=arr1[i++];
            }
            else
            {
                arr3[k]=arr2[j++];
            }
        }
        else if(i<n1)
        {
            arr3[k]=arr1[i++];
        }
        else
        {
            arr3[k]=arr2[j++];
        }
    }
    printf("\nArray after sorting\n");
    for(i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }
    
}