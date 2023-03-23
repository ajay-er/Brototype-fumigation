#include <stdio.h>
int main(void)
{
    int i,j,n,arr[10],odd[10],evn[10],k=0,c=0;
     printf("Enter array limit : ");
    scanf("%d",&n);
    printf("Enter array values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            for(j=i;j<n;j++)
            {
                arr[j]=arr[j+1];

            }
            i--;
            n--;
        }
        
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d ",arr[i]);
    }
    

}