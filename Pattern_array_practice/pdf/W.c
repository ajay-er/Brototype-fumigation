#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,limit,pos,num;
    int arr[10];
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number for insert :");
    scanf("%d",&num);
    printf("Enter the position for insert :");
    scanf("%d",&pos);
  
    
     for(j=limit;j>=pos;j--)
     {
       arr[j]=arr[j-1];
     }
     arr[pos-1]=num;
      
     for(i=0;i<limit+1;i++)
     {
        printf("%d ",arr[i]);
     }
}