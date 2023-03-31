#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,limitNew,temp ;
    int arr[10],arr2[10],merge[20];
    printf("Enter the array limit :");
    scanf("%d",&limit);
    printf("Enter the first  array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
     printf("Enter the second  array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr2[i]);
        }
    //merge//
    limitNew=limit+limit;
    for(i=0;i<limit;i++)
        {
            merge[i]=arr[i];
        }
    for(j=0;j<limit;j++)
        {   
            merge[i]=arr2[j];
            i++;
        }
    printf("Merged array sorting  \n");
    for(i=0;i<limitNew;i++)
        {
           for(j=i+1;j<limitNew;j++)
            {
                if(merge[i]<merge[j])
                    {
                        temp=merge[i];
                        merge[i]=merge[j];
                        merge[j]=temp;
                    }
            }
        }
        for(i=0;i<limitNew;i++)
            {
                 printf("%d ",merge[i]);
            }   

}