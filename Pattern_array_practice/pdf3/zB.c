#include <stdio.h>

int main(void)
{
    int i,j,limit,p,s=1;
    int arr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array valeus: \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }  
    for(i=0;i<limit;i++)
    {
        if(arr[i]%5==0 && i!=limit-1)
        {   
            p=i;
            for(j=p+1;j<limit;j++)
            {   
                arr[j]=arr[j+2];
            }
            if(i==limit-2)
            {
                limit--;
            }
            else 
            {
            limit=limit-2;
            }         
        }
    }
    printf("Answer:\n");
    for(i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }

}