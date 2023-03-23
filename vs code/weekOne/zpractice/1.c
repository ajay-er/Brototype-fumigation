#include <stdio.h>

int main(void)
{
    int i,j,n=4,p=1,f,k=0,d=0;
    int arr[100],arr1[100],limit;
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<limit;i++)
    {   f=0;
        for(j=0;j<limit;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            arr1[k]=arr[i];
            printf("%d ",arr1[k]);
            k++;
            
        }
    }
    printf("\n\npattern: \n");
    for(i=1;i<=n;i++)
    {   p=p+p;
        for(j=1;j<=p;j++)
        {
            printf("%d ",arr1[d++]);
        }//d++;
        printf("\n");
        if(i==n)
        break;
        for(j=1;j<=i;j++)
        {
            printf("%d\n",arr1[d++]);
        }
    }
}