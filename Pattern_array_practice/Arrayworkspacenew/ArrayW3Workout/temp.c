#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,limit,c,k,p,cnt,t=0,n,count=0;
    int arr[10],frr[10],prm[10],trr[10];
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for(i=0;i<limit;i++)
        {
            scanf("%d",&arr[i]);
            
        }
    printf("\nUnique elements: ");
    for(i=0;i<limit;i++)
        {   
            cnt=0;
            for(j=0;j<limit;j++)
                {
                    if(i!=j && arr[i]==arr[j])
                        {
                            cnt=1;
                        }
                }
                if(cnt==0)
                {
                    printf("%d ",arr[i]);
                }         
        }
        
    printf("\nPrime numbers:");
    for(i=0;i<limit;i++)
        {   
            k=0;
            for(j=2;j<=arr[i]/2;j++)
                {
                    if(arr[i]%j==0)
                        {
                            k=1;
                            break;
                        }
                }
                if(k==0 && arr[i]!=1 && arr[i]!=0)
                    {
                        prm[p]=arr[i];
                        p++;
                        frr[p]=0;
                        printf("%d ",arr[i]);
                       
                    }
        }
    for(i=0;i<p;i++)
        {   
            c=1;
            for(j=0;j<p;j++)
                {
                    if(prm[i]==prm[j])
                        {
                            frr[j]=c;
                            c++;
                             
                        }
                }    
               
        }
        for(i=0;i<p;i++)
            {
                 if(frr[i]==4)
                    {
                        trr[t]=prm[i];
                        t++;
                    }
            }

        printf("\nAfter deleting: ");
        
        
         for(j=0;j<limit;j++)
            {
               for(i=0;i<t;i++)
                    {
                        if(trr[i]==arr[j])
                        {   
                            count++;
                            for(n=j;n<limit;n++)
                                {
                                    arr[n]=arr[n+1];
                                }
                                j--;
                        }
                        
                        
                    }
            }
        for(i=0;i<limit-count;i++)
        {
            printf("%d ",arr[i]);
        }
           

    
    
     
}