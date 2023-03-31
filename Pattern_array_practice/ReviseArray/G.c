#include <stdio.h>
#include <conio.h>

int main(void){
    int i,j,limit,cnt,k=0,temp;
    int arr[10];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter array values \n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<limit;i++)
        {
                cnt=0;
            for(j=0;j<limit;j++)
                {
                    if(arr[i]==arr[j] && i!=j)
                        {
                            cnt++;
                        }
                }
                if(cnt==0)
                    {
                        k++;
                    }
        }
       if(k>4)
        {
          for(i=0;i<limit;i++)
            {
                for(j=i+1;j<limit;j++)
                    {
                       if(arr[i]<arr[j])
                       {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        
                       } 
                    }
               
            }
             printf("\nAfter revice \n");
              for(i=0;i<limit;i++)
            {
                printf("%d ",arr[i]);
            }
           
        }
        else
        {
         printf("Unique number is less than 4");
        }
       
        

}