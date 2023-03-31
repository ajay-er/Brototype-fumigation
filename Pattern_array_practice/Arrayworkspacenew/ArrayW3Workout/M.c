#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,sum=0,cnt,k=0,temp,sml,temp2;
    int lar=-1,seclr=-1;

    int arr[20],prm[20];
    printf("Enter array limit :");
    scanf("%d",&limit);
    printf("Enter the array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
    printf("Sum of array: %d\n",sum);
    for(i=0;i<limit;i++)
        {   
            cnt=0;
            for(j=2;j<=arr[i]/2;j++)
                {
                    if(arr[i]%j==0)
                    {
                        cnt=1;
                        break;
                    }
                }
                if(cnt==0 && arr[i]!=0 &&  arr[i]!=1 )
                    {
                        prm[k]=arr[i];
                        k++;
                    }  
        }
    
   if(sum%2!=0 )
        {   
            if(k>0)
            {
                printf("even numbers replaced with smallest prime number:\n");
                for(i=0;i<k;i++)
                    {
                        for(j=i+1;j<k;j++)
                            {
                                if(prm[i]>prm[j])
                                {
                                    temp=prm[i];
                                     prm[i]=prm[j];
                                    prm[j]=temp;
                                }
                                
                            }sml=prm[0];
                    }
                    for(i=0;i<limit;i++)
                        {
                            if(arr[i]%2==0)
                            {
                                arr[i]=sml;
                            }
                        }
                    for(i=0;i<limit;i++)
                        {
                            printf("%d ",arr[i]);
                        }
            }
            else
            {
                printf("even numbers replaced with second largest number of array:\n");
                for(i=0;i<limit;i++)
                {
                    if(lar<arr[i])
                    {
                        seclr=lar;
                        lar=arr[i];
                    }
                    else if(arr[i]>seclr && arr[i]<lar)
                    {
                        seclr=arr[i];
                    }
                }
                for(i=0;i<limit;i++)
                {
                    if(arr[i]%2==0)
                    {
                        arr[i]=seclr;
                    }
                }
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
               temp2=arr[limit-1-i];
               arr[limit-1-i]=arr[i];
               arr[i]=temp2;
            }
            for(i=0;i<limit;i++)
            {
               printf("%d ",arr[i]);
            }
        }
}