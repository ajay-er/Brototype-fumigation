#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,limit,c,sm=0;
    int arr[10],frr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            
        }
    for(i=0;i<limit;i++)
        {   c=1;
            for(j=0;j<limit;j++)
                {   
                    if(arr[i]==arr[j])
                    {  
                        c++;
                    }
                }
                if(c>sm)
                {
                    sm=i;
                }
              
        }
      
        printf("Repeated element is:%d ",arr[sm]);
    
}