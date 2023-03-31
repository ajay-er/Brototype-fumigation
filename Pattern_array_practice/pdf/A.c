#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,seclrg,flag,temp;
    int arr[10],prm[10];
    int sum=0,k=0,sml=9999,lrg=-1;
    printf("Enter array limit:");
    scanf("%d",&limit);
    printf("Enter array values: \n");
    for(i=0;i<limit;i++)
        {
                    scanf("%d",&arr[i]);
        }
    //sum of array 
    for(i=0;i<limit;i++)
        {
            sum=sum+arr[i];
        }
    printf("\nSum of arry :%d",sum);
    //prime numbers set to an array 
    for(i=0;i<limit;i++)
        {
            flag=0;
            for(j=2;j<=arr[i]/2;j++)
                {
                    if(arr[i]%j==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0 && arr[i]!=0 && arr[i]!=1)
                    {
                        prm[k]=arr[i];
                        k++;
                       
                    }
        }
    
     if(sum%2!=0)
        {   
            if(k>0)
            {
                //smallest prime 
                  for(j=0;j<k;j++)
                    {
                    if(sml>prm[j])
                        {   
                        sml=prm[j];
                        }
                    }
                
                  for(i=0;i<limit;i++)
                   {
                        if(arr[i]%2==0)
                            {
                                arr[i]=sml;
                            }
                   } 
                   printf("\nEven numbers replaced with smallest prime number in array");
                   for(i=0;i<limit;i++)
                        {
                            printf("\n%d ",arr[i]);
                        }
                }
                else
                {
                   for(i=0;i<limit;i++)
                    {
                        if(lrg<arr[i])
                        {
                            seclrg=lrg;
                            lrg=arr[i];
                        }
                        else if(arr[i]>seclrg && arr[i]<lrg)
                        {
                            seclrg=arr[i];
                        }
                    }
                    for(i=0;i<limit;i++)
                        {
                            if(arr[i]%2==0)
                                {
                                    arr[i]=seclrg;
                                }
                        }
                    printf("\nEven numbers replaced with Second largest number in array:\n");
                    for(i=0;i<limit;i++)
                        {
                            printf("%d ",arr[i]);
                        }
                    
                }
                   
        }
        else
        {
            for(i=0;i<limit/2;i++)
                {
                    temp=arr[i];
                    arr[i]=arr[limit-i-1];
                    arr[limit-i-1]=temp;
                }
            for(i=0;i<limit;i++)
                {
                    printf("\n%d ",arr[i]);
                }
        }

}